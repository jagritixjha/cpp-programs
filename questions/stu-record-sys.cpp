#include <iostream>
#include <iomanip>
using namespace std;

// ostream &tab(ostream &output)
// {
//   return output << "\t";
// }

class Student
{
private:
  int stu_id;
  string stu_name;
  int stu_age;
  string stu_course;
  string stu_city;
  string stu_email;
  string stu_college;

public:
  void setter()
  {
    cout << "Enter id\t:  ";
    cin >> stu_id;
    cout << "Enter name\t:  ";
    cin >> stu_name;
    cout << "Enter age\t:  ";
    cin >> stu_age;
    cout << "Enter Course\t:  ";
    cin >> stu_course;
    cout << "Enter City\t:  ";
    cin >> stu_city;
    cout << "Enter Email\t:  ";
    cin >> stu_email;
    cout << "Enter College\t:  ";
    cin >> stu_college;
    cout << "##============##" << endl
         << endl;
  }
  void tableHader()
  {
    cout << "Student Details: " << endl
         << endl;
    cout << left << setw(5) << "Id" << setw(20) << "Name" << setw(20) << "Age" << setw(20) << "Course" << setw(20) << "City" << setw(20) << "Email" << setw(20) << setw(20) << "College" << endl;
  }
  void getDataInTable()
  {
    cout << left << setw(5) << stu_id << setw(20) << stu_name << setw(20) << stu_age << setw(20) << stu_course << setw(20) << stu_city << setw(20) << stu_email << setw(20) << stu_college << endl;
  }
};

int main()
{
  Student s[2];

  for (int i = 0; i < 2; i++)
  {
    cout << "Enter Details of Student: " << i + 1 << endl
         << endl;
    s[i].setter();
  }

  s[1].tableHader();

  for (int i = 0; i < 2; i++)
  {
    s[i].getDataInTable();
  }

  return 0;
}