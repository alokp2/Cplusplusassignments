#include <iostream>
using namespace std;

class Rectangle {

  float length;
  float width;

public:
  Rectangle(float Length, float Width) {
    length = Length;
    width = Width;
  }
  int calculateRectangle() { return length * width; }

  void input() {
    int length, width;
    cout << "Enter the value of length:" << endl;
    cin >> length;
    cout << "Enter the value of width:" << endl;
    cin >> width;
  }
};

int main() {

  // Rectangle object(2, 3);
  Rectangle object(2, 3);
  object.input();
  cout << "The rectangle: " << object.calculateRectangle() << endl;
}