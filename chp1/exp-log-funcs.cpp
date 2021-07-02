#include <iostream> 
#include <cmath>

using namespace std;

int main() {
  cout <<  "e ^ 3 = " << exp(3) << endl;
  cout << "2 ^ 3 = " << exp2(3) << endl;
  cout << "e ^ 3 - 1 = " << expm1(3) << endl;
  cout << "In 3 = " <<  log(3) << endl;
  cout << "log 3 = " << log10(3) << endl;
  cout << "log 3 = " << log2(3) << endl;
  cout << "5 ^ 3 = " << pow(5, 3) <<  endl;
  cout << "sqrt(25) = " <<  sqrt(25) << endl;
  cout << "cbrt(64) = " << cbrt(64) << endl; 
  cout << "hypot(3, 4) = " << hypot(3, 4) << endl;
  cout << "hypot(3, 4, 5) = " << hypot(3, 4, 5) << endl;
}

/**
 Other Exponential, Logrithmic and Power functions includes 
 log1p(x)

 hypot(x, y, z) is for C++17, so use the   -std=c++17 flag to compile this code
 > c++ .\exp-log-funcs.cpp -o bin/exp-log-funcs -std=c++17
 
 Output  
    e ^ 3 = 20.0855    
    2 ^ 3 = 8
    e ^ 3 - 1 = 19.0855
    In 3 = 1.09861
    log 3 = 0.477121
    log 3 = 1.58496
    5 ^ 3 = 125
    sqrt(25) = 5
    cbrt(64) = 4
    hypot(3, 4) = 5
    hypot(3, 4, 5) = 7.07107
*/