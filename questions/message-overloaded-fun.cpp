#include <iostream>
using namespace std;

class Message
{
private:
  string a;

public:
  Message()
  {
    a = "Good Morning";
  }
  void print()
  {
    cout << a << endl;
  }
  void print(string name)
  {
    cout << a << ", " << name << endl;
  }
};

int main()
{
  Message m;
  m.print();
  m.print("Jagriti");
  return 0;
}