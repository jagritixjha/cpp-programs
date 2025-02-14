#include <iostream>
#include <iomanip>
using namespace std;

class Cafe
{
private:
  int cafe_id;
  string cafe_name;
  string cafe_type;
  int cafe_rating;
  string cafe_location;
  int cafe_establish_year;
  int cafe_staff_quantity;

public:
  Cafe() // default constructor
  {
    cafe_id = 0;
    cafe_name = "";
    cafe_type = "";
    cafe_rating = 0;
    cafe_location = "";
    cafe_establish_year = 0;
    cafe_staff_quantity = 0;
  }
  void setter()
  {
    cout << "Enter id\t:  ";
    cin >> cafe_id;
    cin.ignore(); // Consume the newline character
    cout << "Enter name\t:  ";
    getline(cin, cafe_name);
    cout << "Enter type(like a rooftop or normal)\t:  ";
    getline(cin, cafe_type);
    cout << "Enter rating(like 1 Star, 2 Start, ..., 5 Star)\t:  ";
    cin >> cafe_rating;
    cin.ignore(); // Consume the newline character
    cout << "Enter location(city name)\t:  ";
    getline(cin, cafe_location);
    cout << "Enter establish year\t:  ";
    cin >> cafe_establish_year;
    cout << "Enter staff quantity\t:  ";
    cin >> cafe_staff_quantity;
    cout << "------------------------------------------" << endl
         << endl;
  }

  void
  tableHader()
  {
    cout << "Cafe Details: " << endl
         << endl;
    cout << left << setw(5) << "Id" << setw(25) << "Name" << setw(20) << "Type" << setw(20) << "Rating" << setw(20) << "location"
         << setw(20) << "est yr" << setw(20) << "Staffs" << endl;
  }

  void getDataInTable() // getter
  {
    cout << left << setw(5) << cafe_id << setw(25) << cafe_name << setw(20) << cafe_type << setw(20) << cafe_rating << setw(20) << cafe_location << setw(20) << cafe_establish_year << setw(20) << cafe_staff_quantity << endl;
  }
};

int main()
{
  int n;
  cout << "Enter number of cafes: ";
  cin >> n;
  cout << "------------------------------------------" << endl
       << endl;
  Cafe c[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Enter Details of Cafe: " << i + 1 << endl
         << endl;
    c[i].setter();
  }

  c[1].tableHader();

  for (int i = 0; i < n; i++)
  {
    c[i].getDataInTable();
  }

  return 0;
}
