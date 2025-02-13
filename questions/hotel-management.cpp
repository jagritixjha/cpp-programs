#include <iostream>
#include <iomanip>
using namespace std;

// ostream &setw(20)(ostream &output)
// {
//   return output << "\t\t";
// }

class Hotel
{
private:
  int hotel_id;
  string hotel_name;
  string hotel_type;
  int hotel_rating;
  string hotel_location;
  int hotel_establish_year;
  static int hotel_staff_quantity;
  static int hotel_room_quantity;

public:
  void setter()
  {
    cout << "Enter id\t:  ";
    cin >> hotel_id;
    cout << "Enter name\t:  ";
    cin >> hotel_name;
    cout << "Enter type(like hotel or motel)\t:  ";
    cin >> hotel_type;
    cout << "Enter rating(like 1 Star, 2 Start, ..., 7 Star)\t:  ";
    cin >> hotel_rating;
    cout << "Enter location(city name)\t:  ";
    cin >> hotel_location;
    cout << "Enter establishment year\t:  ";
    cin >> hotel_establish_year;
    // cout << "Enter staff quantity\t:  ";
    // cin >> hotel_staff_quantity;
    // cout << "Enter room quantity\t:  ";
    // cin >> hotel_room_quantity;
    cout << "##============##" << endl
         << endl;
  }
  void tableHader()
  {
    cout << "Hotel Details: " << endl
         << endl;
    cout << left << setw(5) << "Id" << setw(20) << "Name" << setw(20) << "Type" << setw(20) << "Rating" << setw(20) << "location"
         << setw(20) << "est yr" << setw(20) << "Staffs" << setw(20) << "Rooms" << endl;
  }
  void getDataInTable()
  {
    cout << left << setw(5) << hotel_id << setw(20) << hotel_name << setw(20) << hotel_type << setw(20) << hotel_rating << setw(20) << hotel_location << setw(20) << hotel_establish_year << setw(20) << hotel_staff_quantity << setw(20) << hotel_room_quantity << endl;
  }
};

int Hotel::hotel_staff_quantity = 60;
int Hotel::hotel_room_quantity = 30;

int main()
{
  int n;
  cout << "Enter number of hotels: ";
  cin >> n;
  Hotel h[n];

  for (int i = 0; i < n; i++)
  {
    cout << "Enter Details of Hotel: " << i + 1 << endl
         << endl;
    h[i].setter();
  }

  h[1].tableHader();

  for (int i = 0; i < n; i++)
  {
    h[i].getDataInTable();
  }

  return 0;
}