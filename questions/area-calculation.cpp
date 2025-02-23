
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
    cout << "Area of Rectangle: " << width * height << endl;
  }
};

class Square : public virtual Shape, public Rectangle
{
public:
  void area()
  {
    cout << "Area of Square: " << width * width << endl;
  }
};

int main()
{
  Triangle tr;
  tr.area();

  Rectangle rt;
  rt.area();

  Square sq;
  sq.area();

  return 0;
}