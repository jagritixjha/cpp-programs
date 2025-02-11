#include <iostream>
#include <iomanip>
using namespace std;

// ostream &tab(ostream &output)
// {
//   return output << "\t\t";
// }

class Student
{
private:
  int cust_id;
  string cust_name;
  int cust_age;
  string cust_city;
  long int cust_mobile_number;
  int cust_simcard_validity;
  string cust_telecom_brand_name;

public:
  void setter()
  {
    cout << "Enter id\t:  ";
    cin >> cust_id;
    cout << "Enter name\t:  ";
    cin >> cust_name;
    cout << "Enter age\t:  ";
    cin >> cust_age;
    cout << "Enter City\t:  ";
    cin >> cust_city;
    cout << "Enter Number\t:  ";
    cin >> cust_mobile_number;
    cout << "Enter sim validity (in years)\t:  ";
    cin >> cust_simcard_validity;
    cout << "Enter Brand(like Jio, Airtel, Vi, etc.)\t:  ";
    cin >> cust_telecom_brand_name;
    cout << "##============##" << endl
         << endl;
  }
  void tableHader()
  {
    cout << "Customer Details: " << endl
         << endl;
    cout << left << setw(5) << "Id" << setw(20) << "Name" << setw(20) << "Age" << setw(20) << "City" << setw(20) << "Number" << setw(20) << "SIM Val" << setw(20) << "Brand" << endl;
  }
  void getDataInTable()
  {
    cout << left << setw(5) << cust_id << setw(20) << cust_name << setw(20) << cust_age << setw(20) << cust_city << setw(20) << cust_mobile_number << setw(20) << cust_simcard_validity << setw(20) << cust_telecom_brand_name << endl;
  }
};

int main()
{
  Student s[5];

  for (int i = 0; i < 5; i++)
  {
    cout << "Enter Details of Customer: " << i + 1 << endl
         << endl;
    s[i].setter();
  }

  s[1].tableHader();

  for (int i = 0; i < 5; i++)
  {
    s[i].getDataInTable();
  }

  return 0;
}