#include "iostream"
using namespace std;

class Exception
{
  int a;

public:
  Exception(int age) : a(age){};
  void exc()
  {
    try
    {
      if (a >= 18)
      {
        cout << "You are eligible to vote!" << endl;
      }
      else
      {
        throw 0;
      }
    }
    catch (int a)
    {
      cout << "You are not eligible to vote!" << endl;
    }
  }
};

int main()
{
  int age;
  cout << "Enter your age: ";
  cin >> age;

  Exception vote(age);
  vote.exc();
  return 0;
}