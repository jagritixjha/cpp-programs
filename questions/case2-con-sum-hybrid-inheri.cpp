// Write a Program to perform four different numbers’ sum by inheriting constructors in hybrid inheritance.

#include "iostream"
using namespace std;

class ValueA
{
protected:
  int a;

public:
  ValueA()
  {
    cout << "Enter 1st value : ";
    cin >> a;
  }
};

class ValueB
{
protected:
  int b;

public:
  ValueB()
  {
    cout << "Enter 2nd value: ";
    cin >> b;
  }
};

class Sum : public ValueA, public ValueB
{
protected:
  int sum_a_b;

public:
  Sum()
  {
    sum_a_b = a + b;
    // cout << "sum_a_b" << sum_a_b << endl;
    // cout << a << " + " << b << " + " << c << " + " << d << " = " << a + b + c + d << endl;
  }
};

class ValueC : public Sum
{
protected:
  int c;
  int sum_a_b_c;

public:
  ValueC()
  {
    cout << "Enter 3rd value: ";
    cin >> c;
    sum_a_b_c = c + sum_a_b;
  }
};

class ValueD : public ValueC
{
protected:
  int d;
  int sum_a_b_c_d;

public:
  ValueD()
  {
    cout << "Enter 4th value: ";
    cin >> d;
    sum_a_b_c_d = d + sum_a_b_c;
    // cout << "sum_a_b_c_d = " << sum_a_b_c_d << endl;
    cout << a << " + " << b << " + " << c << " + " << d << " = " << sum_a_b_c_d << endl;
  }
};

int main()
{
  ValueD s;
}