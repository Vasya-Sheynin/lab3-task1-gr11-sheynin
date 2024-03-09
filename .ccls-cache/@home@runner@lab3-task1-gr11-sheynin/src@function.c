/* function.c */

//
//  Created by Sheynin Vasily.
//

//  Implements isNumberPalindromic function

#include "function.h"

//  Check if number "num" is palindromic.
//  Arguments:
//    int num - original number
//  Return value:
//    true - if "num" is palindromic
//    false - otherwise
bool isNumberPalindromic(int num) {
  int copy = num;        //contains copy of number num
  int reversedNum = 0;   //contains reversed number num

  while (copy != 0) {
    reversedNum *= 10;
    reversedNum += copy % 10;
    copy /= 10;
  }

  return reversedNum == num;
}