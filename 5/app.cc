#include <iostream>

void arraySorting(int* array, const int& lenght) {
  for (int i = 0; i < lenght; ++i) {
    for (int j = 0; j < lenght; ++j) {
      if (array[i] < array[j]) {
        std::swap(array[i], array[j]);
      }
    }
  }
}

int main() {
  const int lenght = 5;

  int a[lenght] { 9, 8, 7, 6, 5 };
  int b[lenght] { 4, -100, 2, 1, 0 };

  const int cLenght = 2 * lenght;
  int c[cLenght];
  
  for (int i = 0; i < lenght; ++i) {
    c[i] = a[i];
    c[i + lenght] = b[i];
  }
  
  arraySorting(c, cLenght);

  for (int i = 0; i < cLenght; ++i) {
    std::cout << c[i] << ' ';
  }
  std::cout << '\n';
  std::cout << '\n';
  return 0;
}
