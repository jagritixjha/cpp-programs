#include <iostream>
using namespace std;

class Employee
{
  int emp_id;
  string emp_name;
  int emp_age;
  string emp_role;
  int emp_salary;
  string emp_city;
  int emp_experience;
  string emp_company_name;

public:
  void setData()
  {
    cout << "Enter your id:\t\t";
    cin >> emp_id;
    cout << "Enter your name:\t";
    cin >> emp_name;
    cout << "Enter your age:\t\t";
    cin >> emp_age;
    cout << "Enter your role:\t";
    cin >> emp_role;
    cout << "Enter your salary:\t";
    cin >> emp_salary;
    cout << "Enter your city:\t";
    cin >> emp_city;
    cout << "Enter your experience:\t";
    cin >> emp_experience;
    cout << "Enter company name:\t";
    cin >> emp_company_name;
    cout << "==========" << endl;
  }
};

int main()
{
  Employee emp;
  for (int i = 1; i <= 5; i++)
  {
    cout << "Enter details of employee " << i << endl;
    emp.setData();
  }

  return 0;
}