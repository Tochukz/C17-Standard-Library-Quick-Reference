#include <iostream>
#include <cmath>

using namespace std;

int main() {
  float number1 {99.23};
  float number2  {99.56};
  float number3 { -98.73 };
  
  cout << "ceil(" << number1 << ") = " <<  ceil(number1) << endl;
  cout << "floor(" << number2 << ") = " << floor(number2) <<  endl;
  cout << "trunc(" << number3 << ") = " << trunc(number3) << endl;
  cout << "round(" << number1  << ") = " << round(number1) << endl;
  cout << "round(" << number2  << ") =  " << round(number2) << endl;
  cout << "round(" << number3  << ") =  " << round(number3) << endl;
  cout << "nearbyint(" << number1 << ") = " << nearbyint(number1) << endl;
  cout << "nearbyint(" << number2 << ") = " << nearbyint(number2) << endl;
  cout << "rint(" << number1 << ") = " << rint(number1) << endl;
  cout << "rint(" << number2 << ") = " << rint(number2) << endl;
}

/**
 Other rounding functions includes 
   lround(x)
   llround(x) 
   lrint(x)
   llrint(x)

Output 
  ceil(99.23) = 100
  floor(99.56) = 99
  trunc(-98.73) = -98
  round(99.23) = 99
  round(99.56) =  100
  round(-98.73) =  -99
  nearbyint(99.23) = 99
  nearbyint(99.56) = 100
  rint(99.23) = 99
  rint(99.56) = 100
*/