#include "iostream"
using namespace std;
class Exception
{
  int a, b;

public:
  Exception(int num, int den) : a(num), b(den){};
  void exc()
  {
    try
    {
      if (b == 0)
      {
        throw false;
      }
      else
      {
        cout << endl
             << "Division of " << a << " and " << b << " = " << a / b << endl;
        ;
      }
    }
    catch (bool a)
    {
      cout << endl
           << "Cannot be divided by zero." << endl;
    }
  }
};

int main()
{

  int a, b;
  cout << "Enter numerator value: ";
  cin >> a;
  cout << "Enter denominator value: ";
  cin >> b;

  Exception ex(a, b);
  ex.exc();

  return 0;
}