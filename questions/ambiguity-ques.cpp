#include <iostream>
using namespace std;

class A
{
protected:
  int a = 5;
  int b = 5;

public:
  int add()
  {
    return a + b;
  }
};

class B : public A
{
protected:
  int c = 5;

public:
  int add()
  {
    return a + b + c;
  }
};

class C : public B
{
protected:
  int d = 5;

public:
  int add()
  {
    return a + b + c + d;
  }
};

int main()
{
  C cc;
  cout << "Addition through class c : " << cc.add() << endl;
  cout << "Addition through class b : " << cc.B::add() << endl;
  return 0;
}