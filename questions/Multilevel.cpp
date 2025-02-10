/*

 Write a Program to read and print Employee information with the use of Multilevel inheritance.

 */

#include "iostream"
using namespace std;

class D
{
protected:
  int id;
  string name;
  string role;
  int salary;
  float experience;
  string comp_name;
  string address;
  string email;
  long long int contact;

public:
  void setter()
  {
    cout << "Enter ID : ";
    cin >> id;
    cout << "Enter Name : ";
    cin >> name;
    cout << "Enter Role. : ";
    cin >> role;
  }
};

class C : public D
{
public:
  void setter()
  {
    cout << "Enter Salary : ";
    cin >> salary;
    cout << "Enter Experience : ";
    cin >> experience;
  }
};

class B : public C
{
public:
  void setter()
  {
    cout << "Enter Company Name : ";
    cin >> comp_name;
    cout << "Enter Adderess : ";
    cin >> address;
  }

  void getter()
  {
    cout << "Name : " << name << endl;
    cout << "Role : " << role << endl;
    cout << "Salary : " << salary << endl;
  }
};

class A : public B
{
public:
  void setter()
  {
    cout << "Enter Email : ";
    cin >> email;
    cout << "Enter Contact : ";
    cin >> contact;
  }

  void getter()
  {
    cout << endl
         << "------------------------------" << endl;
    cout << endl
         << "ID : "
         << id << endl;
    cout << "Name : " << name << endl;
    cout << "Role. : " << role << endl;
    cout << "Salary : " << salary << endl;
    cout << "Experience : " << experience << endl;
    cout << "Company Name : " << comp_name << endl;
    cout << "Adderess : " << address << endl;
    cout << "Email : " << email << endl;
    cout << "Contact : " << contact << endl;
  }
};

int main()
{
  A obj;
  obj.D::setter();
  obj.C::setter();
  obj.B::setter();
  obj.setter();
  obj.getter();
}