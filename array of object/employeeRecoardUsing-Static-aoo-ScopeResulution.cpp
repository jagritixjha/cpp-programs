#include <iostream>
using namespace std;

ostream &tab(ostream &output)
{
  return output << "\t\t";
}

class Emp
{
private:
  int id;
  string name;
  double exp;
  static string cmp;

public:
  /*   void changeCmp()
    {
      cout << "Enter Company Name\t:  ";
      cin >> cmp;
      cout << "||====================||" << endl
           << endl;
    } */
  static void changeCmpValue()
  {
    cout << "Enter Company Name\t:  ";
    cin >> cmp;
    cout << "||====================||" << endl
         << endl;
  }
  void setter()
  {
    cout << "Enter id\t:  ";
    cin >> id;
    cout << "Enter name\t:  ";
    cin >> name;
    cout << "Enter exp\t:  ";
    cin >> exp;
    cout << "##============##" << endl
         << endl;
  }
  void getter()
  {
    /*  cout << " id\t:  " << id << endl;
        cout << " name\t:  " << name << endl;
        cout << " exp\t:  " << exp << endl;
        cout << " company name\t:  " << cmp << endl;
        cout << endl; */

    cout << "ID\t:" << id << endl
         << "Name\t:" << name << endl
         << "Exp\t:" << exp << endl
         << "Cmp\t:" << cmp << endl;
  }
  void getDataInTable()
  {
    cout << id << tab << name << tab << exp << tab << cmp << endl;
  }
};

string Emp::cmp = "At&T";

int main()
{
  int n;
  cout << "Enter number of employees: ";
  cin >> n;
  Emp e1[n];

  // e1[1].changeCmp();
  e1[1].changeCmpValue();

  for (int i = 0; i < n; i++)
  {
    cout << "Enter Employee details of  " << i + 1 << endl;
    e1[i].setter();
  }

  cout << "Details of Employees " << endl;
  cout << "ID" << tab << "Name" << tab << "Experience"
       << "\tCompany" << endl;
       
  for (int i = 0; i < n; i++)
  {
    e1[i].getDataInTable();
  }

  return 0;
}