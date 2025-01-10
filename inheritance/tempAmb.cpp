/*
  ⋙  Temporary Ambiguity Removal Using Scope Resolution.

  ⋙  If derived class has it's own function with same name then it'll give priority to its's own function.

  ⋙  If not then it'll lead to ambiguity.

  ⋙  Temporary Ambiguity Removal is used when different classes have functions of same name.   --> diff classes && same func name
*/

#include "iostream"
using namespace std;

class A
{
public:
  void fun()
  {
    cout << "It's class A..." << endl;
  }
};

class B
{
public:
  void fun()
  {
    cout << "It's class B..." << endl;
  }
};

class C
{
public:
  void fun()
  {
    cout << "It's class C..." << endl;
  }
};

class D : public A, public B, public C
{
  // public:
  //   void fun()
  //   {
  //     cout << "It's class D..." << endl;
  //   }
};

int main()
{
  D obj;
  // obj.fun(); // request for member 'fun' is ambiguous
  obj.B::fun();
}
