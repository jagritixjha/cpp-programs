// function overloading and calling original function using scope resolution & overloaded function using child class's instance.  

#include <iostream>
using namespace std;

class Math
{
public:
  void sum(int a, int b)
  {
    cout << "Class Math.." << endl;
    cout << a << " + " << b << " = " << a + b << endl;
  }

  void sum(int a, int b, int c)
  {
    cout << "Class Math.." << endl;
    cout << a << " + " << b << " + " << c << " = " << a + b + c << endl;
  }
};

class Maths : public Math
{
public:
  void sum(int m, int n)
  {
    cout << "Class Maths.." << endl;
    cout << m << " + " << n << " = " << m + n << endl;
  }
};

int main()
{
  Maths m;
  m.sum(5, 5);
  m.Math::sum(15, 5);
  m.Math::sum(5, 5, 5);
  return 0;
}