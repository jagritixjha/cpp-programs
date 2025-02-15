#include "iostream"
using namespace std;

int main()
{
  int age;
  cout << "Enter your age: ";
  cin >> age;

  try
  {
    if (age >= 18)
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
  return 0;
}