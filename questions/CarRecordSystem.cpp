#include <iostream>
using namespace std;

class Car
{
  int car_id;
  string car_company_name;
  string car_color;
  string car_model;
  int car_release_year;

public:
  // void setData(int cid, string ccname, string ccolor, string cmodel, int cryear)
  // {
  //   car_id = cid;
  //   car_company_name = ccname;
  //   car_color = ccolor;
  //   car_model = cmodel;
  //   car_release_year = cryear;
  // }

  void getData()
  {
    cout << "Car ID:\t\t\t ";
    cin >> car_id;
    cout << "Car Company Name:\t ";
    cin >> car_company_name;
    cout << "Car Model:\t\t ";
    cin >> car_model;
    cout << "Car Color:\t\t ";
    cin >> car_color;
    cout << "Car Release Year:\t ";
    cin >> car_release_year;
    cout << "==========\n";
  }
};

int main()
{
  Car c1;
  // c1.setData(445, "Mercedes", "Matte Black", "AMG GT", 2021);
  for (int i = 1; i <= 4; i++)
  {
    cout << "Enter details of car " << i << endl;
    c1.getData();
  }
}