/* hello.c */

//
//  Created by Sheynin Vasily.
//

//  Generates array of N elements and returns number of palindromic numbers.
//  N - command line parameter.
//  Checks if number is palindromic by calling isNumberPalindromic function.

#include "function.h"
#include "function.c"
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <malloc.h>

int main(int argc, char* argv[]) {
  srand(time(NULL));
  
  int n = atoi(argv[1]);                     //array size

  if (n <= 0) {                              //check if input size is correct
    printf("Invalid input: N <= 0\n");
    return 0;
  }
  
  int countPalindromic = 0;                  //number of array items which are palindromic
  int* arr = (int*)malloc(n * sizeof(int));  //initial array

  printf("Generated array:\n");

  for (int i = 0; i < n; i++) {
    arr[i] = rand() % 10001;
    printf("%d ", arr[i]);
    
    if (isNumberPalindromic(arr[i])) {
      countPalindromic++;
    }
  }

  printf("\nThere are %d palindromic numbers in array.\n", countPalindromic);
  
  return 0;
}