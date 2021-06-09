#include <iostream>
#include <fstream>

int calculate(const int& result, const char& oper, const int& x) {
  switch (oper) {
    case '+':
      return result + x;
    case '-':
      return result - x;
    default:
      std::cout << "ERROR: Invalid operator\n";
      std::cout << '\n';
      return 0;
  }
}

void readFile(const char* file) {
  std::fstream fin(file);

  // Якщо не можливо відкрити файл для читання
  if (!fin) {
    std::cout << "ERROR: Could not be opened for reading '" << file << "'\n";
    return;
  }

  int result;
  fin >> result;

  char oper;
  int x;

  while (fin >> oper >> x) {
    result = calculate(result, oper, x);
  }

  std::cout << result << '\n';
  std::cout << '\n';
}

int main() {
  // Читання з файлу
  readFile("temp.txt");
  return 0;
}