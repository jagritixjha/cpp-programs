/*

   Write a Program that defines a shape class with a constructor that gives value to width and height. Then define two sub-classes triangle and rectangle, that calculate the area of the shape area (). In the main, define two objects a triangle and a rectangle, and then call the area() function using these two objects.

 */

#include <iostream>
using namespace std;

class Shape
{
protected:
  int width, height;

public:
  Shape()
  {
    cout << "Enter Width: ";
    cin >> width;
    cout << "Enter Height: ";
    cin >> height;
  }
};

class Triangle : virtual public Shape
{
private:
  float ans = (width * height) / 2;

public:
  void area()
  {
    cout << "Area of Triangle: " << ans << endl;
  }
};

class Rectangle : virtual public Shape
{
public:
  void area()
  {
    cout << "Area of Triangle: " << width * height << endl;
  }
};

int main()
{
  Triangle tr;
  tr.area();

  Rectangle rt;
  rt.area();

  return 0;
}