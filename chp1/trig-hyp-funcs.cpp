#include <iostream>
#include <cmath>

using namespace std;

float degToRad(int deg) {
  const float pi { 3.142 };
  float conversionFactor { pi / 180 };
  return deg * conversionFactor;
}

int main() {
  float thirtyDeg = degToRad(30);
  float fourtyFiveDeg = degToRad(45);
  float sixtyDeg = degToRad(60);
  cout << "sin 30 = " << sin(thirtyDeg) << endl;
  cout << "cos 60 = " << cos(sixtyDeg) <<  endl;  
  cout << "tan 45 = " << tan(fourtyFiveDeg) << endl;
  cout << "sinh 60 = " << sinh(sixtyDeg) << endl; 
  cout << "acos 30 = " << acos(thirtyDeg) <<  endl;
}
/**
 Other Trigonometric and Hyperbolic functions includes 
   cosh(x)
   tanh(x)
   asin(x)
   atan(x)
   asinh(x)
   acosh(x)
   atanh(x)
   atan2(x)


 Output 
   sin 30 = 0.500059
   cos 60 = 0.499882
   tan 45 = 1.0002
   sinh 60 = 1.24958
   acos 30 = 1.01965
*/