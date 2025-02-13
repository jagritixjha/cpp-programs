#include <iostream>
#include <cmath>
using namespace std;

class X
{
protected:
  int a, b, c;
};

class Y : protected X
{
public:
  void setdata()
  {
    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;
    cout << "Enter value of c: ";
    cin >> c;
  }

  void getdata()
  {
    cout << "Sum of all three number's(a,b,c) cubes: " << pow(a, 3) + pow(b, 3) + pow(c, 3);
  }
};

int main()
{
  Y sum;
  sum.setdata();
  sum.getdata();
  return 0;
}