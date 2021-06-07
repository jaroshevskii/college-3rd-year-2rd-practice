#include <iostream>

struct Passenger {
  int amoutOfBaggage;     // Кількість багажу
  double luggageWeight;   // Вага багажу
};

// Отримання значення
int getValue(const int minValue, const int maxValue) {
  int value;

  while (std::cin >> value) {
    if (value >= minValue && value <= maxValue) {
      return value;
    } else {
      std::cout << "ERROR: Entered value is not true\n"
                   "> ";
    }
  }
  return 0;
}

// Отримання даних пасажира
void getPassengerData(Passenger& passenger) {
  std::cout << "> passenger.amoutOfBaggage = ";
  passenger.amoutOfBaggage = getValue(1, 32);

  std::cout << "> passenger.luggageWeight = ";
  passenger.luggageWeight = getValue(1, 128);
  std::cout << '\n';
}

int main() {
  const int length = 3;
  Passenger array[length];
  
  int totalAmoutOfBaggage = 0;      // Загальна кількість багажу
  double totalLuggageWeight = 0.0;  // Загальна вага багажу
  
  for (int i = 0; i < length; ++i) {
    // Отримання даних працівника
    getPassengerData(array[i]);
    
    // Знаходження загальної кількості багажу
    ++totalAmoutOfBaggage += array[i].amoutOfBaggage;

    // Знаходження загальної ваги багажу
    ++totalLuggageWeight += array[i].luggageWeight;
  }

  int numberOfSomePassengers1 = 0;  // Кількість пасажирів які мають більше ніж дві речі
  int numberOfSomePassengers2 = 0;  // Кількість пасажірів у яких кількість речей більша середньої
  int numberOfSomePassengers3 = 0;  // Кількість пасажирів які мають одну річ, вага якої не більше за 25
  
  int averageAmoutOfBaggage = totalAmoutOfBaggage / length;

  for (int i = 0; i < length; ++i) {
    if (array[i].amoutOfBaggage > 2) {
      ++numberOfSomePassengers1;
    }

    if (array[i].amoutOfBaggage == 1 && array[i].luggageWeight < 25.0) {
      ++numberOfSomePassengers3;
    }

    if (array[i].amoutOfBaggage > averageAmoutOfBaggage) {
      ++numberOfSomePassengers2;
    }
  }

  std::cout << "// Statistic\n" <<
               "  Total amout of baggage: " << totalAmoutOfBaggage << '\n' <<
               "  Total amout of baggage: " << totalLuggageWeight << '\n' <<
               "  Number of passengers who have more than two things: " <<  numberOfSomePassengers1 << '\n' <<
               "  The number of passengers with more than average number of items: " << numberOfSomePassengers2 << '\n' <<
               "  Number of passengers who have one thing, the weight of which is not more than 25: " << numberOfSomePassengers3 << '\n';
  std::cout << '\n';
  return 0;
}