// This is the first c++ assignment
#include <iostream>
#include "mathFunctions.hpp"
using namespace::std;

int main() {
    int a = 4;
    int b = 5;
    int x = 10;
    int result;
    int factorialResult;
    cout << "add: -> " << add(&a, &b) << endl;
    cout << "addVal: -> " << addVal(&a, &b, &result) << endl;
    SwapFunc(&a, &b);
    cout << "value of a: " << a << endl;
    cout << "value of b: " << b << endl;
    factorial(&b, &factorialResult);
    cout << "Factorial Result: " << factorialResult << endl;
    refPractice(&x);
    cout << "The ref updated value of x is: " << x << endl<<endl;
    cout << "############################" << endl;
    cout << "Ref Practice" << endl;
    cout << "############################" << endl;
    
    int xx = 190;
    int yy = 200;
    int resultRef;
    refAdd(xx, yy, resultRef);
    cout << "refAdd result --> " << resultRef << endl;
    refFactorial(5, resultRef);
    cout << "refFactorial result --> " << resultRef << endl;
    refSwap(xx, yy);
    cout << "refSwap xx = " << xx << " yy = " << yy << endl;
    return 0;
}
