#include "iostream"
using namespace std;

int factorial(int n)
{
  if (n == 0 || n == 1)
  {
    return 1;
  }
  else
  {
    // n = n * n - 1;
    return n * factorial(n - 1);
  }
}

int main()
{
  int n = 5;
  int fact = factorial(n);
  cout << "factorial of " << n << " is " << fact;
}