#include <iostream>

int searchMaxValue(const int* array, const int& lenght) {
  int max = array[0];
  int index = 0;

  for (int i = 0; i < lenght; ++i) {
    if (abs(array[i]) > abs(max)) {
      max = array[i];
      index = i;
    }
  }
  return index;
}

// Знаходження суми елементів масиву розташованих після максимального за модулем значення
void searchSumArray(const int* array, const int& lenght) {
  int max = searchMaxValue(array, lenght);
  int sum = 0;
  int counter = 0;
  

  for (int i = max + 1; i < lenght; ++i) {
      sum += array[i];
      ++counter;
  }

  std::cout << "Sum: " << sum << '\n' <<
               "Counter: " << counter << '\n';
  std::cout << '\n';
}

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
  int array[lenght] { -1, 7, 1, 0, -6 };
  
  // Знаходження суми елементів масиву розташованих після максимального за модулем значення
  searchSumArray(array, lenght);

  // Сортування масиву
  arraySorting(array, lenght);

  for (int i = 0; i < lenght; ++i) {
    std::cout << array[i] << ' ';
  }
  std::cout << '\n';
  std::cout << '\n';
  return 0;
}