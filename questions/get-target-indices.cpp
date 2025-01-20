// wap to print thefir 2 indices number of the give taget(addition of elements value).

#include <iostream>
using namespace std;

int main()
{
  // Solution sol = Solution();
  // int *ptr = (int *)calloc(4, sizeof(int));
  // realloc(ptr, 10 * sizeof(int));
  int len, target, flag = 0;
  
  cout << "enter no. of elements:";
  cin >> len;
  int *nums = (int *)malloc(len * sizeof(int));
  // int nums[len];

  cout << "\nenter elements:\n";
  for (int i = 0; i < len; i++)
  {
    cin >> *(nums+i);
  }
  cout << "enter target: ";
  cin >> target;

  for (int i = 0; i < len; i++)
  {
    for (int j = i + 1; j < len; j++)
    {
      if ((nums[i] + nums[j]) == target)
      {
        cout << i << "   " << j;
        flag++;
        return 0;
      }
    }
  }

  if (flag)
  {
    cout << "no target found ";
  }
}