#include <iostream>
using namespace std;

class Inline {
public:
  inline float multiply(float x, float y) 
{ 
  return (x * y); 
  }
  inline float cube(float x) 
{ return (x * x * x); 
  }
};

int main() {
  Inline obj;
  float num1,num2;

  cout << "Enter first value: "<<endl;
  cin >>num1;
  cout << "Enter second value: "<<endl;
  cin >>num2;
  cout <<"Multiplication value is : " << obj.multiply(num1,num2)<<endl;
  cout << "Cube value of num1: " << obj.cube(num1) <<endl<<" and Cube value of num2: " 
       << obj.cube(num2) <<endl;

  return 0;
  }