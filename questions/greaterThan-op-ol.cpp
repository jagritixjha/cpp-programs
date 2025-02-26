// Write a Program to overload < operator to find which object contains a higher value from given 2 numbers.

#include <iostream>
using namespace std;

class Value
{
private:
  int a;

public:
  void setter()
  {
    cout << "Enter value: ";
    cin >> a;
  }

  void getter()
  {
    cout << a << endl;
  }

  bool operator>(Value v2)
  {
    return a > v2.a;
  }
};

int main()
{
  Value v1, v2;
  v1.setter();
  v2.setter();
  if (v1 > v2)
  {
    cout << "Value of object v1 is greater, i.e ";
    v1.getter();
  }
  else
  {
    cout << "Value of object v2 is greater, i.e ";
    v2.getter();
  }
  return 0;
}