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
        throw 1.2;
      }
      else
      {
        cout << endl
             << a << "/" << b << " = " << a / b;
      }
    }
    catch (int a)
    {
      cout << endl
           << "Cannot be divided by 0" << endl;
    }
    catch (char a)
    {
      cout << endl
           << "Cannot be divided by 0" << endl;
    }
    catch (...)
    {
      cout << endl
           << "General : Cannot be divided by 0" << endl;
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

  Exception ee(a, b);
  ee.exc();

  return 0;
}