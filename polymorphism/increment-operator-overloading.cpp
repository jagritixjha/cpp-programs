#include <iostream>
using namespace std;

class Demo
{
private:
  int a;

public:
  void setA()
  {
    cout << "Enter value of a: ";
    cin >> a;
  }

  void operator++(int n)
  {
    a++;
  }

  void operator++()
  {
    ++a;
  }

  /*
     Breaking Down operator++
     d++ => d = d + 1
     ∴ d++ => d.a + 1 (int n);
  */

  void
  getA()
  {
    cout << a;
  }
};

int main()
{
  Demo d;
  d.setA();
  cout << "Postfix : ";
  d++;
  d.getA();
  cout << endl
       << "Prefix : ";
  ++d;
  d.getA();
  return 0;
}