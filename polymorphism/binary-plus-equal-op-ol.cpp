// Binary Operator Overloading

#include <iostream>
using namespace std;

class Demo
{
private:
  int a;

public:
  void setA()
  {
    cout << "Enter value: ";
    cin >> a;
  }

  void getA()
  {
    cout << a;
  }

  void operator+=(Demo d)
  {
    a = a += d.a;
  }
};

int main()
{
  Demo d1, d2;
  d1.setA();
  d2.setA();
  d1 += d2;
  d1.getA();
  return 0;
}