#include <iostream>
using namespace std;

inline void add(int a, int b)
{
  cout << "value of a = " << a << " and b = " << b << endl;
}

int main()
{
  int a = 5, b = 10;
  add(a, b);
}