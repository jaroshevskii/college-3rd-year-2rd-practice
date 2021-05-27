#include <iostream>
#include <cmath>

/*void foo(double& x1, double& x2) {
  while (x1 <= 0.2 * abs(x2 - x1)) {
    foo(x1, x2);
  }
}*/

int main() {
  std::cout << "> a = ";
  int a;
  std::cin >> a;
  std::cout << '\n';
  
  double x;
  if (a <= 1) {
    x = 2 *a;
  }
  if ( a > 25) {
    x = a /25;
  } else {
    x = a / 5;
  }

  
  double k;
  do {
    k = x;
    double x = 0.2 * x + a / 5 * pow(x, 4);
    std::cout << "x: " << x << '\n';
  } while (x <= 0.2 * abs(x - k));
  
  
  
  std::cout << "k: " << k << '\n';
  
  

  return 0;
}