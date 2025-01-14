#include <iostream>
#include <cstdio>
using namespace std;

class StaticClass
{
public:
  static int a;

public:
  static void printStatic()
  {
    cout << "int is this :" << a << endl;
  }
};
int StaticClass::a = 10;

int main()
{
  StaticClass a, b, c;
  StaticClass::a = 50;
  a.printStatic();
  a.a = 80;

  b.printStatic();
  a.a = 90;

  c.printStatic();
}
