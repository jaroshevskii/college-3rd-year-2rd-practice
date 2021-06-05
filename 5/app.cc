#include <iostream>

void arraySorting(int (&array)[3][3], const int& columnsLenght, const int& linesLenght) {
  int temp;
  for (int i = 0; i < columnsLenght; ++i) {
    for (int j = 0; j < linesLenght; ++j) {
      for (int a = 0; a < columnsLenght; ++a) {
        for (int b = 0; b < linesLenght; ++b) {
          if (array[i][j] < array[a][b]) {
            int temp = array[i][j];

            array[i][j] = array[a][b];
            array[a][b] = temp;
          }
        }
      }
    }
  }
}

int main() {
  const int columnsLenght = 3;
  const int linesLenght = 3;

  int a[columnsLenght][linesLenght] {
    {2, 4, 3},
    {2, 1, 6},
    {7, 8, 4}
  };
  
  int b[columnsLenght][linesLenght] {
    {7, 4, 3},
    {9, 1, 6},
    {7, 8, 4}
  };

  int c[columnsLenght + linesLenght][linesLenght];

  arraySorting(c, columnsLenght + linesLenght, linesLenght);

  for (int i = 0; i < columnsLenght + linesLenght; ++i) {
    for (int j = 0; j < linesLenght; ++j) {
      std::cout << c[i][j] << ' ';
    }
    std::cout << '\n';
  }

    



  return 0;
}