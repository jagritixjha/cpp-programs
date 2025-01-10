#include <iostream>
using namespace std;

/*

  hybrid

*/

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

class B
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

class C
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

//  multiple
class D : public A, public B, public C
{
public:
  void display();
};

void D ::display()
{
  cout << "a + b + c = " << a + b + c << endl;
};

//  multilevel
class E : public D
{
public:
  void multiply()
  {
    cout << "a * b * c = " << a * b * c;
  }
};

int main()
{
  E obd;
  obd.setA();
  obd.setB();
  obd.setC();
  obd.display();
  obd.multiply();
}

/*
single
multilevel
multiple
hierarchical
hybrid
 */