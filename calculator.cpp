// This programs is about making simple calculator using class

#include <iostream>
using namespace std;

class Calculator {
public:
  int add(int x, int y) { return x + y; }
  int substraction(int x, int y) { return x - y; }
  int multiplication(int x, int y) { return x * y; }
  int division(int x, int y) { return x / y; }
};
int main() {
  int first, second;
  cout << "Enter first value: ";
  cin >> first;
  cout << "Enter second value: ";
  cin >> second;
  Calculator obj;
  cout << "The addition of two numbers= " << obj.add(first, second) << endl;
  cout << "The Substraction of two numbers= " << obj.substraction(first, second)
       << endl;
  cout << "The multiplication of two numbers= "
       << obj.multiplication(first, second) << endl;
  cout << "The Divide of two numbers= " << obj.division(first, second) << endl;
}