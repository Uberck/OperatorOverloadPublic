// Operator overload driver program
// Christos Kokkalis

#include <iostream>
#include "NumberClass.h"

int main() {
  // Declares 3 objects with declared values using parameterized constructor
  Number a = 13.25; 
  Number b = 2.0;
  Number c = 6;

  // Entered text confirmation
  std::cout << " Values entered for a, b & c:\n";

  // Displays the stored object data using overloaded << operator 
  std::cout << "\n A value: " << a << "\n B value: " << b << "\n C value: " << c << std::endl;

  // Calculates the expression and stores the answer in object ans
  Number ans = (a + b - c) / 4.0;
  std::cout << "\n Calulating expression based on a, b, and c values...\n";
  std::cout << "\n Expression (a + b - c) / 4.0 = " << ans << std::endl;

  std::cout << "\n Testing prefix & postfix operators...";
  // Declare x & y values and create 2 objects using the parameterized constructor
  Number x = 36, y = 5.625;
  std::cout << "\n\n Now, x is: " << x;

  // Tests the operation of the prefix and postfix operators & shows that it works
  int testPreInt = ++x;
  std::cout << "     \t ++x: " << testPreInt;
  int testPostInt = x++;
  std::cout << "\t x++: " << testPostInt;

  std::cout << "\n Now, y is: " << y;
  double testPreDouble = ++y;
  std::cout << "\t ++y: " << testPreDouble;
  double testPostDouble = y++;
  std::cout << "\t y++: " << testPostDouble;

  std::cout << "\n\n Now, x is: " << x;
  testPreInt = --x;
  std::cout << "     \t --x: " << testPreInt;
  testPostInt = x--;
  std::cout << "\t x++: " << testPostInt;

  std::cout << "\n Now, y is: " << y;
  testPreDouble = --y;
  std::cout << "\t --y: " << testPreDouble;
  testPostDouble = y--;
  std::cout << "\t y--: " << testPostDouble;
  std::cout << "\n";
  std::cout << "\n Press any key to exit";
  
  std::cin.get(); // Pause for debugging
  return 0; // Exit program
}