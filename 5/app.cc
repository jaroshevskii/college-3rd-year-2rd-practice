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
  const int lenght = 3;

  int a[lenght] { 9, 8, 7 };
  int b[lenght] { 6, 5, 4 };

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
  return 0;
}