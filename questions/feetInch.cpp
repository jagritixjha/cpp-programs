#include <iostream>
using namespace std;

class Distance
{
public:
  int feet, inch;
};

int main()
{
  Distance d1, d2, sum;
  cout << "Enter feet for first distance: ";
  cin >> d1.feet;
  cout << "Enter inch for first distance: ";
  cin >> d1.inch;
  cout << "Enter feet for sencond distance: ";
  cin >> d2.feet;
  cout << "Enter inch for sencond distance: ";
  cin >> d2.inch;

  sum.feet = d1.feet + d2.feet;
  sum.inch = d1.inch + d2.inch;

  while (sum.inch > 12)
  {
    if (sum.inch >= 12)
    {
      sum.inch -= 12;
      sum.feet += 1;
    }
  }
  cout << sum.feet << " feet " << sum.inch << " inch";

  return 0;
}
