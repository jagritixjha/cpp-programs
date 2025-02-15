#include <iostream>
using namespace std;

class Exception
{
  string pass;
  int flag = 0;

public:
  Exception(string p) : pass(p){};

  void check()
  {
    for (int i = 0; pass[i] != '\0'; i++)
    {
      if (pass[i] >= 'A' && pass[i] <= 'Z')
      {
        flag++;
        break;
      }
    }
  }

  void exc()
  {
    try
    {
      if (flag)
      {
        cout << "Password validated!" << endl;
      }
      else
      {
        throw 0;
      }
    }
    catch (int a)
    {
      cout << "Password should contain at least one uppercase letter.!" << endl;
    }
  }
};

int main()
{
  string password;
  cout << "Enter your password: ";
  cin >> password;

  Exception val(password);
  val.check();
  val.exc();
}