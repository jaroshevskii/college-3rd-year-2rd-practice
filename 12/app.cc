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

int searchArraySum(const int* array, const int& lenght) {
  int sum = 0;

  for (int i = 0; i < lenght; ++i) {
    if (array[i] < 0) {
      sum += array[i];
    }
  }
  return sum;
}

int main() {
  const int iLenght = 3;
  const int jLenght = 3;

  int array[iLenght][jLenght] {
    { 1, -4, -1 },
    { 2, -9, 1 },
    { 1, 14, 2}
  };
  
  int sum[iLenght] { 0, 0, 0 };
  
  for (int i = 0; i < iLenght; ++i) {
    sum[i] = searchArraySum(array[i], jLenght);
  }

  int index[iLenght] { 0, 1, 2};
  
  arraySorting(sum, index, iLenght);
  
  for (int i = 0; i < iLenght; ++i) {
    for (int j = 0; j < jLenght; ++j) {
      std::cout << array[index[i]][j] << ' ';
    }
    std::cout << '\n';
  }
  std::cout << '\n';
  return 0;
}