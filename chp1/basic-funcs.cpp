#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int number1 { 10 };
    float number2 { 10.05 };
    float temp { -112.75 };
    
    float tempPositive = abs(temp);

    int quotient {};
    int* quotientPtr = &quotient;

    cout << "Temp Positive = " << tempPositive << endl;
    cout << "fmod(10, 3)  = " << fmod(10, 3)  << endl;
    cout << "fmod(-10, 3) = " << fmod(-10, 3) << endl;
    cout << "fmod(-10, -3) = " << fmod(-10, -3) <<  endl;
    cout << "remainder(10, 3) = "  << remainder(10, 3) << endl;
    cout << "remainder(-10, 3) = " << remainder(-10, 3) << endl;
    cout << "remainder(-10, -3) = " << remainder(-10, -3) << endl;
    cout << "remquo(10, 3) = " << remquo(10, 3, quotientPtr) << " + " << *quotientPtr << " x  3" << endl;

    int dividend { 3 };
    auto divResult = div(10, dividend);
    cout << "div(10, 3) = " << divResult.quot  << " x  " << dividend  << " + " << divResult.rem << endl;
    cout << divResult.quot << " x  " <<  dividend << " + " << divResult.rem  << " = " << fma(divResult.quot, dividend, divResult.rem) << endl;

    cout << "fdim(5, 3) = " << fdim(5, 3) << endl;
    cout << "fdim(3, 5) = " << fdim(3, 5) << endl;
    cout << "fdim(5, 5) = " <<  fdim(5, 5) << endl;

    const char* five { "5" };
    cout << five << " = " <<  nan(five) <<  endl;
}

/**
 Other basic math function includes 
  fabs(x)
  fabsf(x)
  fabsl(x)
  labs(x)
  llabs(x)
  ldiv(x, y)
  lldiv(x, y)
  nanf(string)
  nanl(string)

 Output 
    Temp Positive = 112.75    
    fmod(10, 3)  = 1
    fmod(-10, 3) = -1
    fmod(-10, -3) = -1        
    remainder(10, 3) = 1      
    remainder(-10, 3) = -1    
    remainder(-10, -3) = -1   
    remquo(10, 3) = 1 + 3 x  3
    div(10, 3) = 3 x  3 + 1   
    3 x  3 + 1 = 10
    fdim(5, 3) = 2
    fdim(3, 5) = 0
    fdim(5, 5) = 0
    5 = nan
 */ 