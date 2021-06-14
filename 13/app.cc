#include <iostream>

int func(int value) {
  int counter = 0;
  int sum = 0;

  for (int i = 0; i < value; ++i) {
    if (i % 2 != 0) {
      sum += i;
      ++counter;
    }
    
    if (sum == value) {
      return counter;
    }
  }
  return 0;
}

int* func(int value, int& counter) {
  int sum = 0;

  for (int i = 0; i < value; ++i) {
    if (i % 2 != 0) {
      sum += i;
      ++counter;
    }
    
    if (sum == value) {
      return &counter;
    }
  }
  return 0;
}

int func(int value, int sum, int counter) {
  int *c = &counter;

  for (int i = 0; i < value; ++i) {
    if (i % 2 != 0) {
      sum += i;
      ++counter;
    }
    
    if (sum == value) {
      return *c;
    }
  }
  return 0;
}

int main() {
  std::cout << "> value = ";
  int value;
  std::cin >> value;
  std::cout << '\n';
  
  int counter = 0;
  std::cout << "A: " << func(value) << '\n' <<
               "B: " << *func(value, counter) << '\n' <<
               "C: " << func(value, 0, 0) << '\n';
  std::cout << '\n';
  return 0;
}