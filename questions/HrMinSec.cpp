#include <iostream>
using namespace std;

class Time
{
public:
  float sec;

  // void input()
  // {
  //   cout << "Enter seconds: ";
  //   cin >> sec;
  // }
};

int main()
{
  Time t1;
  cout << "Enter seconds: ";
  cin >> t1.sec;

  int hr = 0;
  int min = 0;

  if (t1.sec == 3600)
  {
    cout << 1 << ":"
         << 0
         << ":"
         << 0;
  }
  else if (t1.sec < 3600)
  {
    // while (t1.sec > 3600)
    // {
    //   if (t1.sec >= 3600)
    //   {
    //     t1.sec -= 3600;
    //     hr += 1;
    //   }
    // }

    while (t1.sec > 60)
    {
      if (t1.sec >= 60)
      {
        t1.sec -= 60;
        min += 1;
      }
    }
    cout << "0"
         << ":" << min << ":" << t1.sec;
  }
  else
  {
    while (t1.sec > 3600)
    {
      if (t1.sec >= 3600)
      {
        t1.sec -= 3600;
        hr += 1;
      }
    }

    while (t1.sec > 60)
    {
      if (t1.sec >= 60)
      {
        t1.sec -= 60;
        min += 01;
      }
    }
    cout << hr << ":" << min << ":" << t1.sec;
  }

  // int min = t1.sec / 60;
  return 0;
}
