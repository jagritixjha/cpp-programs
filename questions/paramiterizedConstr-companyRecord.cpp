#include <iostream>
#include <iomanip>
using namespace std;

class Company
{
private:
  int cmp_id;
  string cmp_name;
  int cmp_staff_quantity;
  double comp_revenue;
  int comp_import_raw_diamonds;
  int comp_export_diamonds;
  string comp_ceo;

public:
  Company() // default constructor
  {
    cmp_id = 0;
    cmp_name = "";
    cmp_staff_quantity = 0;
    comp_revenue = 0;
    comp_import_raw_diamonds = 0;
    comp_export_diamonds = 0;
    comp_ceo = "";
  }

  Company(int cmp_id, string cmp_name, int cmp_staff_quantity, double comp_revenue, int comp_import_raw_diamonds, int comp_export_diamonds, string comp_ceo)
  {

    this->cmp_id = cmp_id;
    this->cmp_name = cmp_name;
    this->cmp_staff_quantity = cmp_staff_quantity;
    this->comp_revenue = comp_revenue;
    this->comp_import_raw_diamonds = comp_import_raw_diamonds;
    this->comp_export_diamonds = comp_export_diamonds;
    this->comp_ceo = comp_ceo;
  }

  void
  tableHader()
  {
    cout << "Company Details: " << endl
         << endl;
    cout << left << setw(5) << "Id" << setw(25) << "Name" << setw(20) << "Staffs" << setw(20) << "Revenu" << setw(20) << "Import" << setw(20) << "Export" << setw(20) << "Ceo" << endl;
  }

  void getDataInTable() // getter
  {
    cout << left << setw(5) << cmp_id << setw(25) << cmp_name << setw(20) << cmp_staff_quantity << setw(20) << comp_revenue << setw(20) << comp_import_raw_diamonds << setw(20) << comp_export_diamonds << setw(20) << comp_ceo << endl;
  }
};

int main()
{
  int n;
  cout << "Enter number of Companies: ";
  cin >> n;
  cout << "------------------------------------------" << endl
       << endl;
  Company c[n];

  for (int i = 0; i < n; i++)
  {
    int id, staffs, import, eexport;
    double rev;
    string name, ceo;

    cout << "Enter Details of Company: " << i + 1 << endl
         << endl;

    cout << "Enter id\t:  ";
    cin >> id;
    cin.ignore(); // Consume the newline character
    cout << "Enter name\t:  ";
    getline(cin, name);
    cout << "Enter staff quantity \t:  ";
    cin >> staffs;
    cout << "Enter revenue\t:  ";
    cin >> rev;
    cout << "Enter no. of raw diamonds imported per year\t : ";
    cin >> import;
    cout << "Enter no. of raw diamonds exported per year\t : ";
    cin >> eexport;
    cin.ignore();
    cout << "Enter name of CEO of the company\t:  ";
    getline(cin, ceo);
    cout << "------------------------------------------" << endl
         << endl;
    c[i] = Company(id, name, staffs, rev, import, eexport, ceo);
  }

  c[1].tableHader();

  for (int i = 0; i < n; i++)
  {
    c[i].getDataInTable();
  }

  return 0;
}
