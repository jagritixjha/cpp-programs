// program to register user (username, password, confirm password), login user(username,passwod), 
// & reset password(old password, new password, confirm password).

#include "iostream"
using namespace std;

class Google
{
protected:
  string username, password;

public:
  Google() // sign-up
  {
    string u, p, p2;
    cout << "Enter Username: ";
    cin >> u;
    username = u;
  red:
    cout << "Enter Password: ";
    cin >> p;
    cout << "Confirm Password: ";
    cin >> p2;

    if (p2 == p)
    {
      password = p;
      // cout << "pass = " << password << endl;
      // cout << "user = " << username << endl;
      system("cls");
      cout << "Signed Up Successfully....!" << endl;
    }
    else
    {
      cout << "Password Mismatch....!" << endl;
      goto red;
    }
  }

  void logIn()
  {
  re_enter_detail:
    string uu, pp;
    cout << "Login..." << endl;
    cout << "Enter Username: ";
    cin >> uu;
    cout << "Enter Password: ";
    cin >> pp;

    if (uu == username && pp == password)
    {
      system("cls");
      cout << "Logged In Successfully....!" << endl;
    }
    else if (uu != username)
    {
      cout << "Invalid username." << endl;
      goto re_enter_detail;
    }
    else
    {
      cout << "Invalid password." << endl;
      goto re_enter_detail;
    }
    // else
    // {
    //   cout << "Incorrect username or password." << endl;
    //   goto re_enter_detail;
    // }
  }
};

class User : private Google
{
public:
  void log_in()
  {
    logIn();
  }

  void changePassword()
  {
  redd:
    string pp1, pp2, pp3;
    cout << "Enter old Password: ";
    cin >> pp1;
    if (pp1 == password)
    {
    red:
      cout << "Enter new password: ";
      cin >> pp2;

      if (pp2 == password)
      {
        cout << "New password can't be same as old password..!" << endl;
        goto red;
      }

      cout << "Confirm password: ";
      cin >> pp3;
      if (pp2 == pp3)
      {
        password = pp2;
        // cout << "pass = " << password << endl;
        // cout << "user = " << username << endl;
        system("cls");
        cout << "Password Changed Successfully....!" << endl;
      }
      else
      {
        cout << "Password Mismatch....!" << endl;
        goto red;
      }
    }
    else
    {
      cout << "Incorrect old password....!" << endl;
      goto redd;
    }
  }
};

int main()
{
  User g;
  g.log_in();
  g.changePassword();
  g.log_in();
}