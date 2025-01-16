#include <iostream>
using namespace std;

int gloVar = 10;

class var
{
public:
  int gloVar = 50;

  void printvar()
  {
    cout << "Value of Local Variable: " << gloVar << endl;
    cout << "Value of Gloabal Variable using scope operator: " << ::gloVar << endl;
  }
};

int main()
{
  var obj;
  obj.printvar();
  return 0;
}