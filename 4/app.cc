#include <iostream>

double searchAverageValue(const int* array, const int& lenght) {
  int sum = 0;
  for (int i = 0; i < lenght; ++i) {
    sum += array[i];
  }
  return sum / lenght;
}

void foo(const int* array, const int& lenght) {
  double averageValue = searchAverageValue(array, lenght);
  
  for (int i = 0; i < lenght; ++i) {
    if (array[i] < averageValue) {
      std::cout << array[i] << ' ';
    }
  }
  std::cout << '\n';
}

int main() {
  const int columnsLenght = 3;
  const int linesLenght = 3;

  int array[columnsLenght][linesLenght] {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
  };

  for (int i = 0; i < linesLenght; ++i) {
    foo(array[i], columnsLenght);
  }
  return 0;
}