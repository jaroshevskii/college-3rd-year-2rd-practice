#include <iostream>

int main() {
  const int lenght = 8;
  bool array[lenght] { 1, 0, 0, 1, 1, 0, 1, 0 };

  int result = 0;
  int temp = 1;

  for (int i = lenght - 1; i > 0; --i) {
    result += array[i] * temp;
    temp *= 2;  
  }
  
  if (array[0]) {
    result *= -1;
  }

  std::cout << "Result: " << result << '\n';
  std::cout << '\n';
  return 0;
}