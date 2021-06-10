#include <iostream>

void arraySorting(int* array, int* index, const int& lenght) {
  for (int i = 0; i < lenght; ++i) {
    for (int j = 0; j < lenght; ++j) {
      if (array[i] > array[j]) {
        std::swap(array[i], array[j]);
        std::swap(index[i], index[j]);
      }
    }
  }
}

int main() {
  const int iLenght = 3;
  const int jLenght = 3;

  int array[iLenght][jLenght] {
    { 1, -4, -1 },
    { 2, -5, 1 },
    { 1, 1, 2}
  };

  int sum[2][iLenght] {
    { -10, -9, -3 },
    { 0, 1, 2}
  };
  
  arraySorting(&sum[0][0], &sum[1][0], iLenght);

  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < iLenght; ++j) {
      std::cout << sum[i][j] << ' ';
    }
    std::cout << '\n';
  }
  std::cout << '\n';


  return 0;
}