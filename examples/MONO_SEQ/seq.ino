
void renderSequencer(){


  if(!slave) {
    while(seq.clockReady()) seq.clockIn(), sendClock(),seq.update(audioTicks());
  } 
  while(seq.stepReady()) {
    seq.stepIn();
    if(jump) seq.jumpToStep(jumpStep),jump=false;
    proceedStep(seq.getCurrentStep()); 
  }
  //  sendGBclock();
}

void sendClock(){
  MIDI.sendRealTime(Clock);
}


void proceedStep(unsigned char _step){

  showTempo(_step);
  if(metronome) renderMetronome(_step);

  unsigned char _STEP=getStep(currentPattern,_step);
  interpretStep(_STEP);
  showStep(_STEP);

}

void showStep(unsigned char _step){


  for(int i=0;i<NUMBER_OF_SOUNDS;i++){
    if(shift) {
      if(i>=3) hw.setLed(i-3,bitRead(_step,i));
    }
    else{
      if(i<3) hw.setLed(i,bitRead(_step,i));
    }
  }

}

void renderMetronome(unsigned char _step){
  if(_step%16==0) aOsc[METRONOME_OSC].setFreq(1760),renderM=true; 
  else if(_step%4==0) aOsc[METRONOME_OSC].setFreq(880),renderM=true;
  else renderM=false;

}


void interpretStep(unsigned char _step){
  if(!record){

    sound=soundFromButtons()|_step;
    if(soundChanged()){
   //  if(!global) hw.freezeAllKnobs();
      playSound(sound,DEFAULT_VELOCITY);
    }

  }
}

void showTempo(unsigned char _step){


  if(record){
    if(_step%4==0) hw.setColor(RED);
    else hw.setColor(BLACK);
  }
  else if(global){
    if(_step%4==0) hw.setColor(RED) ;
    else hw.setColor(page+2);
  }
  else {
    if(_step%4==0) hw.setColor(page+2) ;
    else hw.setColor(BLACK);
  }
  if(_step==0) hw.setColor(WHITE);

}


void writeToStep(unsigned char _pattern, unsigned char _step, unsigned char _bit, boolean _state){
  unsigned char _what=0;
  _what=getStep(_pattern,_step); 
  bitWrite(_what,_bit,_state) ;
  setStep(_pattern,_step,_what);
}



boolean dealMystery(unsigned char mysteryValue,unsigned char currentSequencerStep){
  boolean mystery;
  if(mysteryValue==0){
    mystery=false;
  }
  else{
    mystery=false;

    unsigned char _MYSTERY_MAIN = mysteryValue/4;
    unsigned char _MYSTERY_SIDE = 3-mysteryValue % 4;

    switch(_MYSTERY_MAIN){

    case 0:
      if(currentSequencerStep%2>0) mystery = (rand(_MYSTERY_SIDE)==0)? true : false; 
      hardMystery=false;

      break;
    case 1:
      if(currentSequencerStep%4>0) mystery = (rand(_MYSTERY_SIDE)==0)? true : false; 
      hardMystery=false;
      break;
    case 2:
      if(currentSequencerStep%8>0) mystery = (rand(_MYSTERY_SIDE)==0)? true : false; 
      hardMystery=true;

      break;
    case 3:
      if(currentSequencerStep%16>0) mystery = (rand(_MYSTERY_SIDE)==0)? true : false; 
      hardMystery=true;
      break;

    } 

  }

  return mystery;

}








