#include <iostream>
using namespace std;

int main()
{
  int a, b;
  cout << "Enter a: ";
  cin >> a;
  cout << "Enter b: ";
  cin >> b;

  try
  {
    if (b == 0)
    {
      throw 0;
    }
    else
    {
      cout << "Division of a and b is " << a / b << endl;
    }
  }
  catch (int b)
  {
    cout << "Cannot divide by 0!" << endl;
  }
}