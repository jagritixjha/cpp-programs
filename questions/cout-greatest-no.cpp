// print grestest number among 4 numbers

#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
  int arr[4] = {a, b, c, d}, greatest = arr[0];
  for (int i = 0; i < 3; i++)
  {
    if (arr[i + 1] > greatest)
    {
      greatest = arr[i + 1];
    }
  }
  return greatest;
}

int main()
{
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int ans = max_of_four(a, b, c, d);
  printf("%d", ans);

  return 0;
}