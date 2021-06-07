#include <iostream>
#include <cstring>

void print(char* array, const int lenght) {
  for (int i = 0; i < lenght; ++i) {
    std::cout << array[i];
  }
  std::cout << '\n';
}

int main() {
  char array[] {"asd ds hghghg\0"};
  
  int temp = 1;
  int start = 0;
  for (int i = 1; i < strlen(array); ++i) {
    if ((array[i] == ' ' || array[i] == '\0') && temp % 2 == 0) {
      print(&array[start], temp);
      start = i;
      temp = 0;
    }
    ++temp;
  }
  return 0;
}