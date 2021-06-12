#include <iostream>

int main() {
  int value = 9;

  while (sum < value) {
    ++counter;
    sum += sum + 1;
  }

  if (sum == value) {
    std::cout << value << " = " << counter << '\n';
  } else {
    std::cout << "ERROR\n";
  }
  

  return 0;
}