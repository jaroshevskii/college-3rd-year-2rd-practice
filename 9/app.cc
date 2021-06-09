#include <iostream>
#include <string>

void aFoo(const std::string& str) {
  if (str.find(':') > str.length()) {
    std::cout << "ERROR: String dosen't have ':'\n";
    return;
  }

  std::cout << str.substr(str.rfind(':') + 1);
}

void bFoo(const std::string& str) {
  int lenght = str.length();
  int counter = 0;
  int temp = 1;

  for (int i = 0; i < lenght; ++i) {
    if (str[i + 1] == ' ' || str[i + 1] == '\0') {
      if (temp % 2 != 0) {
        ++counter;
      }
      
      temp = 0;
      ++i;
    }

    ++temp;
  }
  std::cout << "Counter: " << counter << '\n';
  std::cout << '\n';
}

bool cFoo(std::string& str) {
  int lenght = str.length();
  for (int i = 0; i < lenght; ++i) {
    if (str[i] == ',') {
      str = str.erase(i, lenght);

      std::cout << str << '\n';
      return true;
    }
  }

  return false;
}

int main() {
  std::cout << ">  ";
  std::string str;
  getline(std::cin, str);
  std::cout << '\n';

  aFoo(str);

  bFoo(str);

  if (!cFoo(str)) {
    std::cout << "ERROR: String dosen't have ','\n";
  }
  return 0;
}