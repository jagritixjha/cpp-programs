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

  Demo operator+(Demo d)
  {
    Demo temp;
    temp.a = a + d.a;
    return temp;
  }
};

int main()
{
  Demo d1, d2, d3;
  d1.setA();
  d2.setA();
  d3 = d1 + d2;
  d3.getA();
  return 0;
}