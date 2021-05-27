#include <iostream>

double getValue() {
  double value;
  std::cin >> value;
  return value;
}

int main() {
  std::cout << "> x = ";
  double x = getValue();

  std::cout << "> y = ";
  double y = getValue();
  std::cout << '\n';

  if (x < 0.0 || y < 0.0) {
    if (x < 0.0 && y < 0.0) {
      x = abs(x);
      y = abs(y);
    } else {
      x += 0.5;
      y += 0.5;
    }
  } else if (x < 0.5 && x > 2.0 && y < 0.5 && y > 2.0) {
    x -= 10.0;
    y -= 10.0;
  }

  std::cout << "x: " << x << "\n" <<
               "y: " << y << '\n';
  std::cout << '\n';
  return 0;
}