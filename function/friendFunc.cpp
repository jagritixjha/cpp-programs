#include <iostream>
using namespace std;

class fun1
{
private:
  int data;

public:
  fun1(int val) : data(val) {}
  friend void frndFunc(fun1 obj);
};

void frndFunc(fun1 obj)
{
  cout << "Data stored in Friend Function: " << obj.data << endl;
}

int main()
{
  fun1 obj(40);
  frndFunc(obj);
  return 0;
}