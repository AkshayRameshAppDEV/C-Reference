//
//  mathFunctions.hpp
//  Assignment1
//
//  Created by Akshay Ramesh on 9/18/21.
//

#ifndef pointersAndRefs_hpp
#define pointersAndRefs_hpp

#include <stdio.h>

int add(int *a, int *b);
int addVal(int *a, int *b, int *result);
void SwapFunc(int *a, int *b);
void factorial(int *a, int *result);
void refPractice(int *x);
void refAdd(int a,int b, int &result);
void refFactorial(int a, int &result);
void refSwap(int &a, int &b);

#endif /* mathFunctions_hpp */
