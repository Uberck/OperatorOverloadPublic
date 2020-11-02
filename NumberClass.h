// Number class definition
// Christos Kokkalis

#ifndef NUMBER_H
#define NUMBER_H

#include <iostream>

// Define a class called Number
class Number {
  // Data member to store number
  double number;
  public:
    // Default constructor to assign default value to number
    Number() {
      number = 0;
    }

  // Parameterized constructor to assign parameter value to number
  Number(double num) {
    number = num;
  }

  // Overloads the = operator, assigns the parameter object imp to an implicit object & returns the implicit object
  Number operator = (Number & imp) {
    number = imp.number;
    return *this;
  }

  // Overloads type conversion to double operator
  operator double() {
    return number;
  }

  // Overloads the << operator to display number
  friend std::ostream & operator << (std::ostream & out, const Number & num) 
  {
    out << num.number;
    return out;
  }

  // Overloads the + operator, adds parameter object imp number with implicit object number,
  // stores the result in a temporary object called tmp & returns the result object tmp
  Number operator + (Number & imp) {
    Number tmp;
    tmp.number = number + imp.number;
    return tmp;
  }

  // Overloads the - operator, divides parameter object imp number with implicit object number,
  // stores the result in temporary object tmp & returns the result object tmp
  Number operator - (Number & imp) {
    Number tmp;
    tmp.number = number - imp.number;
    return tmp;
  }

  // Overloads the * operator, multiplies parameter object imp number with implicit object number,
  // Stores the result in temporary object tmp, returns the result object tmp
  Number operator * (Number & imp) {
    Number tmp;
    tmp.number = number * imp.number;
    return tmp;
  }

  // Overloads the / operator, divides parameter object imp number with implicit object number,
  // stores the result in temporary object tmp & returns the result object tmp
  Number operator / (Number & imp) {
    Number tmp;
    tmp.number = number / imp.number;
    return tmp;
  }

  // Overloads prefix ++ operator
  Number operator++() {
    ++number;
    return *this;
  }

  // Overloads postfix ++ operator
  Number operator++(int) {
    Number tmp(this -> number);
    number++;
    return tmp;
  }

  // Overloads prefix -- operator
  Number operator--() {
    --number;
    return *this;
  }

  // Overloads postfix -- operator
  Number operator--(int) {
    Number tmp(this -> number);
    number--;
    return tmp;
  }
};

#endif