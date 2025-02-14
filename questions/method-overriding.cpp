/*

  implement method overriding by following the below-mentioned criteria:-
    - Class Cricket -> Class T20Match
    - Class Cricket -> Class TestMatch
    - Override getTotalOvers() method in both classes

*/

#include <iostream>
using namespace std;

class Cricket
{
public:
  void getTotalOvers()
  {
    cout << "50" << endl;
  }
};

class T20Match : public Cricket
{
public:
  void getTotalOvers()
  {
    cout << "40" << endl;
  }
};

class TestMatch : public Cricket
{
public:
  void getTotalOvers()
  {
    cout << "20" << endl;
  }
};

int main()
{
  TestMatch tm;
  tm.Cricket::getTotalOvers();
  return 0;
}