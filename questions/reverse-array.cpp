#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int n, i;
  cout << "enter element no.s.: ";
  cin >> n;
  int arr[n];
  
  cout << "enter elements: \n";
  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (i = n - 1; i >= 0; i--)
  {
    cout << arr[i] << " ";
  }

  return 0;
}
