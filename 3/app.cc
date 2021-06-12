#include <iostream>
#include <cmath>

int factorial(int max) {
  int sum = 1;

  for (int i = 1; i <= max; ++i) {
    sum *= i;
  }
  return sum;
}

double th(double x) {
  double th1;

  for (int k = 0; k <= 5; ++k) {
    th1 = pow(x, 2 * k + 1) / factorial(2 * k + 1);
  }
  
  double th2;

  for (int k = 1; k <= 5; ++k) {
    th2 = pow(x, 2 * k) / factorial(2 * k);
  }
  return th1 / th2;
}

int main() {
  std::cout << "> t = ";
  double t;
  std::cin >> t;

  double y = (2.0 * th(1.5) - 3 * th(t - 1 / 10)) / (5 - th(4 * t - 1));

  std::cout << "y: " << y << '\n';
  std::cout << '\n';
  return 0;
}