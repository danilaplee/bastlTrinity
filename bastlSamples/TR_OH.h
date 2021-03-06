#ifndef TR_OH_H_
#define TR_OH_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
#define TR_OH_NUM_CELLS 1864
#define TR_OH_SAMPLERATE 16384
 
const char __attribute__((section(".progmem.data"))) TR_OH_DATA [] = {1, -3, 3,
-5, 4, 2, -5, -2, -1, -4, -8, 8, -7, 11, -4, -3, 8, -5, 11, -4, 9, 5, 0, -1, 9,
7, -20, -3, -11, 3, -1, -19, 1, 6, -5, -9, 3, -9, -2, 0, 0, 29, 2, 2, 10, -13,
11, -6, 3, -9, -11, -3, 5, 11, -11, 6, -24, 6, 10, 3, -3, -8, 3, -1, 9, -24,
-13, 16, 3, 0, 3, -7, -22, -10, 9, 9, 26, -13, 7, -2, 7, 20, -7, -10, -17, 4,
-1, 26, -12, 2, -3, -17, -3, -2, 11, 3, -3, 1, 5, -12, -1, -18, -3, 5, 1, 10, 6,
-17, -1, 20, -9, -2, -13, 10, 10, 3, -3, -6, -5, -2, 6, -13, 13, -17, 16, -1, 5,
-20, -11, 20, -17, 18, 2, 30, -38, 5, 0, 0, -2, -8, 13, -29, 13, 4, 15, -30, 24,
4, 1, -1, -1, 12, -9, 0, -26, 17, -28, 7, -1, 7, -8, -8, 13, 5, 5, -10, 18, -12,
20, -14, 8, -16, -8, -3, -5, 9, -6, 16, -20, 14, -10, 12, -4, -13, 12, -5, -12,
-2, 16, 2, -5, 3, -5, 0, 5, -6, 7, -11, 6, -2, -1, -14, 0, -12, -2, 27, -1, 8,
-19, 7, -1, 3, 3, 0, 6, -8, 6, 0, 4, -12, -19, 1, 9, 15, -4, -12, 13, -9, 2, 4,
-17, -1, -3, 9, -4, 3, -12, 4, -13, 8, 30, -20, 14, -11, 20, -16, -1, 8, -11, 1,
-11, 30, -13, -2, -23, 9, 4, -15, 5, -5, -2, -14, 32, 1, -7, 4, -2, 2, 12, 0,
-15, -10, -5, 0, 3, -12, -16, 9, -1, 13, -6, 12, -8, -1, 14, 9, -3, -18, 19,
-23, 10, -4, -3, -3, -8, -6, -16, 20, -11, 3, -8, 23, 3, -5, 18, -1, 6, -13, 19,
-5, -13, -10, -2, -2, 4, -12, -20, 16, 4, 3, -5, 7, -15, 1, 11, 23, -4, -11, -3,
-7, 11, -15, -4, -14, 28, -15, 7, 1, -5, -5, -8, 38, -17, 16, -20, 7, -2, -8,
-5, -18, 7, -10, 28, -8, 8, 2, -11, 20, -7, -2, -1, -5, -13, -7, 6, -9, -9, -2,
25, 8, -2, 9, -20, -2, -4, 8, 7, -16, -5, 5, 2, -14, 1, -5, 20, 4, 6, 5, -22,
-9, -11, 15, -2, -5, 2, 13, 0, 1, 3, -5, -13, 1, 5, 15, -14, -25, 10, -14, 23,
-5, 9, -7, 6, 4, 5, 11, -29, 5, -14, 23, -13, 9, -2, -30, 2, 11, 19, -9, 0, -13,
10, 5, 5, -18, -10, 3, 0, 12, -1, 0, -5, 4, -9, 16, 2, 3, -23, 0, 21, -8, -8,
-16, 15, -16, 14, 2, 6, -18, -13, 23, 2, 6, -16, 11, -11, -1, 0, 2, -5, -16, 14,
9, 12, -17, -10, 4, -11, 5, 9, -7, -9, 11, 4, 11, -1, -9, -3, -7, 15, -8, -1,
-15, -6, 6, 9, -6, -1, 9, -19, 21, 6, 2, -12, -8, 8, -1, 7, -10, -5, -13, 2, 12,
5, 0, -15, 8, 4, 3, -2, -6, -16, 3, 11, 1, -5, -9, 10, -6, 2, 0, 12, -15, 4, 6,
2, -6, -15, 4, -3, 8, -7, 7, -10, 0, 3, 7, -8, -8, 8, 4, 3, -8, -5, -7, 6, 5, 9,
3, -2, -13, -3, -1, 5, -8, -8, 5, 3, 8, 2, -3, -13, 5, 4, 18, -3, -8, -14, -1,
2, -4, 9, -9, 6, 0, 19, -12, -8, -11, -1, 3, -1, 13, -13, 0, -10, 13, 4, 8, -5,
-4, 4, 4, 3, -9, -7, -22, 8, 3, 8, -6, 0, 1, -4, 6, 9, 0, -21, 18, -3, 0, -6,
-5, 2, -6, 4, 3, 4, -15, 22, -11, 3, -3, -4, 8, -7, 9, -13, 14, -16, 10, -5, 7,
-5, -8, 17, -23, 13, -3, -1, -14, 15, 2, -2, 0, -11, 6, -12, 4, 5, 2, -4, 0, 2,
7, -5, -7, -4, -1, 4, 6, -3, -9, -7, 0, 17, -9, -3, -2, 2, 9, 1, 4, -13, -7, -3,
6, 2, -2, -3, -9, 2, 2, 8, 5, -5, -2, -1, 10, 1, -6, -5, -19, 8, 9, 8, -15, -7,
2, 8, 16, -12, 12, -12, 9, -12, 6, -1, -21, 7, -8, 23, -12, 11, -15, 1, 1, 3,
12, -15, 2, -9, 11, -8, 9, -7, 2, -2, 7, 8, -7, -1, -15, -2, 5, -3, -12, 5, -9,
7, -4, 10, 1, -4, 11, 0, 3, -9, 8, -11, 2, -8, -1, 3, -18, 19, -2, 4, -6, 2, 6,
-6, -1, -11, 14, -13, 16, -7, 1, -7, -7, 15, -16, 5, -8, 11, -15, -1, 1, 3, 2,
-1, 13, 0, 3, 5, -4, -11, -1, -3, 5, -8, -5, -9, 3, -5, 8, 7, -3, 5, 0, 21, -15,
-7, 2, -11, -1, -2, 9, -10, -3, 2, 4, 6, -4, 8, -8, 2, -4, 1, -2, -10, -3, -3,
14, 0, 9, 1, -2, -3, 7, 5, -8, -11, -9, 1, -4, -2, -4, -2, 7, 8, 9, 1, -9, -1,
-1, 3, -2, -1, -12, 4, -6, -3, 7, -4, 4, -3, 8, 2, 2, -10, -3, -5, -2, 12, 1, 0,
-4, -4, 3, -2, -1, -2, -9, 2, -2, -2, -2, 2, 3, 5, 4, 0, 5, -4, 4, -10, -6, 1,
-5, 11, -10, 3, -10, 3, 5, 0, 2, -11, 12, -10, 10, -12, 10, -7, -7, 13, -4, 7,
-14, 10, -12, 7, -3, 3, -10, -4, 7, -5, 7, -6, 4, -12, 12, 3, 9, -13, -1, -4,
-2, 3, -7, 7, -17, 9, -4, 23, -12, -3, -1, 1, 6, -4, 17, -23, 3, -5, 14, -8, -7,
-4, -3, 9, -5, 11, -9, -4, -6, 6, 4, 1, -4, 1, 1, -3, 7, -9, -4, -9, 2, 8, -6,
2, 1, 2, 2, 5, 5, -5, -3, -6, 2, -3, 0, -9, -8, 7, 1, 7, -1, -3, -1, 8, 8, -4,
-1, -1, -2, -3, -1, 2, -10, -8, -2, 4, 4, 4, -6, 3, 1, -1, -1, -12, 11, 0, 5,
-3, 2, 0, 0, -3, -2, -5, -8, 7, -5, 6, -6, 3, -1, 2, 2, 7, -2, -3, -5, -5, 7,
-14, 4, -6, 7, 0, 9, -5, -2, 1, -4, 12, -11, 11, -16, -2, 0, 1, 1, -4, 6, -2,
11, -3, 4, -12, -5, -10, 8, 6, -12, 1, -12, 11, 0, 14, -4, -3, -1, 0, 5, -4, 2,
-17, 3, -11, 10, 2, 0, -10, -4, 8, 10, 19, -16, 0, -13, 11, -1, 1, -2, -16, 5,
-5, 13, -6, -8, -9, 4, 7, 6, 6, -10, 6, -12, 5, 2, 6, -1, -7, 6, -8, 9, -19, 1,
-4, -1, 5, 6, 0, -10, 5, -14, 11, -5, 6, 1, 2, 3, -2, -7, -9, -1, -1, 4, -4, 5,
-2, 3, -12, 7, -12, 8, 3, 8, 3, -12, 7, -10, 13, -13, 6, -6, 6, -2, -1, -4, -6,
1, -3, 4, 4, 9, -9, 9, -16, 8, -9, 6, -1, -4, -5, -2, 9, -16, 10, -15, 11, -6,
15, -8, -2, 8, -11, 10, -10, 6, -7, 7, -1, 4, -5, 2, -7, 4, -1, -7, 8, -10, 8,
-8, 3, 0, 3, -9, 4, 0, -7, 14, -14, 0, -7, 6, 6, -7, -5, 6, 9, -1, 2, -7, -1,
-8, 7, -3, 0, -6, -4, 4, -3, 9, -5, 2, -7, 4, -2, 11, -3, -5, -1, -4, 13, -7, 8,
-9, -3, 1, -1, -5, -5, -8, -1, 5, 6, 5, -8, 4, -4, 4, 1, 1, -7, 5, -3, 0, -2,
-8, 0, -8, 6, -3, 1, 0, 3, 0, 2, -10, 3, 11, 3, 3, -7, -4, -3, 0, -5, 1, -5, -2,
-6, 5, 0, 1, 0, -6, 10, 1, 10, -6, 4, -11, -6, 6, 3, -1, -10, 6, -10, 11, -1,
-4, -2, -4, 6, 0, 12, -6, -2, -7, 9, 6, -12, 3, -5, 1, -9, 3, -7, -3, -4, -2,
17, -5, 3, -1, 7, -1, -3, 0, 1, -3, -5, 6, -5, -2, -5, 1, -3, -1, 4, -1, -4, -1,
8, 0, -2, -10, 5, 3, 0, 5, -6, 4, -13, 14, -5, 2, -8, -5, 6, -4, 12, -14, 9,
-15, 15, -6, 4, -3, -4, 5, -5, 12, -10, 4, -14, 9, -13, 8, 2, 2, -4, -8, 11, -3,
7, -7, -4, -7, 6, 0, 2, -5, 1, 1, -9, 10, -5, -3, 2, -1, -1, -6, 2, -1, 2, 1, 4,
-1, 0, 6, -1, -3, -10, 2, 2, -7, -5, -2, 0, 2, -3, 11, -1, -2, 1, 4, 2, -8, -1,
-2, 0, -4, 7, -3, 6, -3, -4, 4, -1, -2, -2, -6, 0, 0, -1, 2, -7, 4, -4, 10, -5,
8, -14, -2, 6, -6, 10, -11, 8, -9, 12, -9, 9, -3, -5, 0, -6, 15, -12, 4, -12, 5,
-6, 8, 2, 1, -1, -8, 8, -7, 5, -8, -2, -1, 4, 3, 3, -9, -3, 4, -3, 1, -5, 4, -7,
3, -1, 0, -1, -6, 5, -3, 8, -6, 4, -5, 0, 2, -5, 5, -9, 8, -12, 10, -3, 2, 2,
-4, 4, -10, 11, -7, 2, -6, 1, -2, 0, 1, -3, 2, -5, 1, 1, 0, 0, -4, 2, 3, -2, 4,
-6, 1, -4, 4, -5, 0, -1, -2, 1, -6, 5, -5, 6, -8, 3, 4, -2, 3, -1, -2, 3, -2, 0,
1, -8, 4, -3, -3, -1, 3, -2, 1, 1, 3, 1, -3, 5, -11, -1, -1, -1, -1, -2, 2, -4,
3, -7, 2, 0, 4, -2, 2, 6, -9, 5, -7, 5, -4, 6, 2, -2, -1, -10, 4, -7, 4, -12, 8,
-4, 4, 3, -1, 3, -7, 8, -7, 7, -5, 4, 0, -2, -7, 3, -2, -5, 1, -1, 6, -10, 4,
-2, 7, -8, 7, 1, -5, 3, -7, 9, -10, 1, -5, 1, 0, -2, 4, -11, 3, -6, 9, 0, -1, 6,
-3, 7, -7, 4, -7, 0, 2, -1, 2, -2, 1, -8, 1, -4, -1, 1, 1, 0, 1, -3, -2, 4, 0,
1, -5, 5, 2, -4, -4, -3, 1, -5, 4, -1, 1, -2, 1, 2, -6, 1, 0, 5, -3, 1, -3, 2,
-8, -5, 7, -6, 4, 0, 6, -5, -7, -4, 5, -2, -5, 5, -1, 4, -2, 1, -2, 3, -1, 5,
-1, -4, 0, -4, 1, -14, 4, 2, 2, 1, -5, 7, -7, 2, 0, 3, -2, -2, 4, -5, 3, -10, 5,
-8, 1, 4, -3, 9, -5, 3, -7, 0, -2, 5, 1, -5, 2, -2, 3, -3, -1, -6, 2, -1, 5, -4,
-3, -3, 1, 0, -3, 8, -3, 8, -8, 5, -5, -7, 2, -3, 5, -6, 3, -4, 3, -1, 0, 1, 0,
4, -8, 3, -6, 1, -2, 0, 3, 0, 5, -3, 0, -4, 0, -3, 1, -1, -1, -1, 0, 0, -2, 1,
-1, 1, -1, 1, -2, 0, -1, -1, -1, -1, 0, -1, 0, 0, -1, 0, 0, 0, -1, 0, -1, -1, 0,
};

#endif /* 909_OH_H_ */
