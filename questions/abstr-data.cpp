#include <iostream>
using namespace std;

class Admin
{
private:
  string company_name;
  long long int total_annual_revenue;

public:
  void
  setter()
  {
    cout << "Enter company name: ";
    cin >> company_name;
    cout << "Enter Total Revenue of Company: ";
    cin >> total_annual_revenue;
  }
  void myAccess()
  {
    cout << "Company name: \t" << company_name << endl;
    cout << "Total Revenue of Company: " << total_annual_revenue << endl;
  }
};

class Manager : private Admin
{
  long int manager_salary;
  int total_staff;

public:
  void setter()
  {
    Admin::setter();
    cout << "Enter manager salary: ";
    cin >> manager_salary;
    cout << "Enter total number of staffs: ";
    cin >> total_staff;
  }
  void myAccess()
  {
    cout << endl
         << "----------------------" << endl;
    Admin::myAccess();
    cout << "Manager salary: \t" << manager_salary << endl;
    cout << "Total number of staffs: \t" << total_staff << endl;
  }
};

class Employee : private Manager
{
  long int employee_salary;
  bool can_terminate = true;

public:
  void setter()
  {
    Manager::setter();
    cout << "Enter Employee Salary: ";
    cin >> employee_salary;
  }
  void myAccess()
  {
    Manager::myAccess();
    cout << "Employee Salary: \t" << employee_salary << endl;
    cout << "Can terminate: \t" << can_terminate << endl;
  }
};

int main()
{
  Employee e;
  e.setter();
  e.myAccess();
  return 0;
}