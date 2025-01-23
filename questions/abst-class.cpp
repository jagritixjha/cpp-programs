#include <iostream>
using namespace std;

class Mathematical_operation
{
public:
  // double radius, height, breadth, length;
  virtual double calculate() = 0;
};

class Circle : public Mathematical_operation
{
  double radius;

public:
  Circle(double r) : radius(r){};

  double calculate()
  {
    return 22 * radius * radius / 7;
  }
};

class Rectangle : public Mathematical_operation
{
  double length, breadth;

public:
  Rectangle(double l, double b) : length(l), breadth(b){};

  double calculate()
  {
    return length * breadth;
  }
};

class Triangle : public Mathematical_operation
{
  double breadth, height;

public:
  Triangle(double b, double h) : breadth(b), height(h){};

  double calculate()
  {
    return 1 * breadth * height / 2;
  }
};

int main()
{
  Circle c(20);
  cout << "Area of circle = " << c.calculate() << endl;

  Rectangle r(20, 20);
  cout << "Area of rectangle = " << r.calculate() << endl;

  Triangle t(20, 20);
  cout << "Area of triangle = " << t.calculate() << endl;
  return 0;
}