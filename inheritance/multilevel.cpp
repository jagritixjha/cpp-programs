#include <iostream>
using namespace std;

// multilevel
class A
{
protected:
  int a;

public:
  void setA()
  {
    cout << "Enter value of a: ";
    cin >> a;
  }
};

class B : public A
{
protected:
  int b;

public:
  void setB()
  {
    cout << "Enter value of b: ";
    cin >> b;
  }
};

class C : public B
{
protected:
  int c;

public:
  void setC()
  {
    cout << "Enter value of c: ";
    cin >> c;
  }
};

class D : public C
{
public:
  void display();
};

void D ::display()
{
  cout << "Addition of a, b & c is " << a + b + c;
};

int main()
{
  D obd;
  obd.setA();
  obd.setB();
  obd.setC();
  obd.display();
}