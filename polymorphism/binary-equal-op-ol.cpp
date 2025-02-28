#include "iostream"
using namespace std;

class OpOverload
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
};

int main()
{
  OpOverload op1, op2;
  op1.setA();
  op2.setA();
  cout << "Before Assignment: ";
  op1.getA();
  cout << endl
       << "After Assignment: ";
  op1 = op2;
  op1.getA();
}