/*

 Write a Program to perform all basic arithmetic.operations such as +, -, *, and / operations by implementing method overloading using 2 classes.

 */

#include "iostream"
using namespace std;

class Arithmetic
{
public:
  void calculate(int a, int b)
  {
    cout << a << " / " << b << " = " << a / b << endl;
  }

  void calculate(int a, int b, int c)
  {
    cout << a << " - " << b << " - " << c << " = " << a - b - c << endl;
  }

  void calculate(int a, int b, int c, int d)
  {
    cout << a << " * " << b << " * " << c << " * " << d << " = " << a * b * c * d << endl;
  }
};

class Arithmetic1 : public Arithmetic
{
public:
  void calculate(int a, int b, int c, int d, int e)
  {
    cout << a << " + " << b << " + " << c << " + " << d << " + " << e << " = " << a + b + c + d + e << endl;
  }
};

int main()
{
  Arithmetic1 ar;
  ar.Arithmetic::calculate(4, 2);
  ar.Arithmetic::calculate(4, 2, 1);
  ar.Arithmetic::calculate(4, 2, 2, 1);
  ar.calculate(5, 5, 5, 5, 5);
}