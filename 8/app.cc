#include <iostream>
#include <string>

int main() {
  std::cout << ">  ";
  std::string str;
  getline(std::cin, str);
  std::cout << '\n';

  int lenght = str.length();

  for (int i = 0; i < lenght; ++i) {
    if ((str[i] !=  ' ' && str[i] !=  ',') && (str[i + 1] !=  ' ' && str[i + 1] !=  ',') && 
        (str[i + 2] == ' ' || str[i + 2] ==  ',')) {
      std::cout << str[i] << str[i + 1] << ' ';
    }
  }
  std::cout << '\n';
  return 0;
}