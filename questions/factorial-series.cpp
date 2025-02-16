#include "iostream"
using namespace std;

class Fact
{
  int n;

public:
  void setter()
  {
    cout << "Enter number: ";
    cin >> n;
  }

  void printSeries()
  {
    for (int i = 1; i <= n; i++)
    {
      cout << factorial(i) << "\t";
    }
  }

  int factorial(int n)
  {
    if (n == 0 || n == 1)
    {
      return 1;
    }
    else
    {
      return n * factorial(n - 1);
    }
  }
};

int main()
{
  Fact f;
  f.setter();
  f.printSeries();
}