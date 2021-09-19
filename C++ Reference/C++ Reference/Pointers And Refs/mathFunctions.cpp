//
//  mathFunctions.cpp
//  Assignment1
//
//  Created by Akshay Ramesh on 9/18/21.
//

#include "mathFunctions.hpp"

int add(int *a, int *b) {    
    return *a + *b;
}
int addVal(int *a, int *b, int *result) {
    *result = *a + *b;
    return *result;
}
void SwapFunc(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void factorial(int *a, int *result) {
    int temp = *a;
    int res = 1;
    for (int i=temp; i>=1; i--) {
        res *= i;
    }
    *result = res;
}

void refPractice(int *x) {
    int &refX = *x;
    refX = 1000;
}

void refAdd(int a,int b, int &result) {
    result = a + b;
}

void refFactorial(int a, int &result) {
    int res = 1;
    for (int i=a; i>=1; i--) {
        res *= i;
    }
    result = res;
}

void refSwap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

