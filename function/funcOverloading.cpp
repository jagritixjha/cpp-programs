#include <iostream>
using namespace std;

int add(int a, int b)
{
  return a + b;
}

float add(float a, float b)
{
  return a + b;
}

string add(const string &a, const string &b)
{
  return a + b;
}

int main()
{
  int a = 5, b = 5;
  float c = 2.50, d = 2.50;
  string str1 = "hello ", str2 = "world!";

  cout << "Function 1 value: " << add(a, b) << endl;
  cout << "Function 2 value: " << add(c, d) << endl;
  cout << "Function 3 value: " << add(str1, str2) << endl;
}