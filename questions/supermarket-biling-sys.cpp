#include <iostream>
using namespace std;

class User
{
protected:
  int userId;
  int pass;

public:
  User()
  {
    userId = 0;
    pass = 0;
  }
  void login()
  {
    cout << endl
         << "Enter User Id : ";
    cin >> userId;
    cout << "Enter Password : ";
    cin >> pass;
  }

  int verification()
  {
    return userId, pass;
  }
};

class billingRecords : public User
{
protected:
  int itemNumber;
  string itemName;
  int quantity;
  int price;
  int discount;

public:
  billingRecords()
  {
    itemNumber = 0;
    itemName = "";
    quantity = 0;
    price = 0;
    discount = 0;
  }
  void bill()
  {
    cout << endl
         << "Enter item number: ";
    cin >> itemNumber;
    cin.ignore();
    cout << "Enter item name: ";
    getline(cin, itemName);
    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter discount: ";
    cin >> discount;
    cout << "-----------------------" << endl;
  }
  void displayBill()
  {
    // cout << "Item Name: " << itemName << endl;
    cout << endl
         << "Item Number: " << itemNumber << endl;
    cout << "Item Name: " << itemName << endl;
    cout << "Item quantity: " << quantity << endl;
    cout << "Item price: " << price << endl;
    cout << "Discount: " << discount << endl;
  }
  int itemmNumber()
  {
    return itemNumber;
  }
};

int main()
{
  int i, n, itemSearch, found = 0, user_id, pass;
  char add_exit;
  cout << "Enter number of Users: ";
  cin >> n;
  User u[n];

  // cout << "Enter number of Bills: ";
  // cin >> m;
  billingRecords b[10];

  for (i = 0; i < n; i++)
  {
    u[i].login();
    for (int j = 0; j < 10; j++)
    {
      cout << "Enter a. to add bill and e. to exit." << endl;
      cin >> add_exit;

      if (add_exit == 'a')
      {
        b[j].bill();
      }
      else
      {
        break;
      }
    }
  }
  // x:
  cout << endl
       << "Enter your credentials to search billing records." << endl;
  cout << "User Id: ";
  cin >> user_id;
  cout << "Password: ";
  cin >> pass;

  for (i = 0; i < n; i++)
  {
    if (user_id && pass == u[i].verification())
    {
      cout << "Enter item number to search: ";
      cin >> itemSearch;
      for (int j = 0; j < 10; j++)
      {
        if (b[j].itemmNumber() == itemSearch)
        {
          b[j].displayBill();
          found++;
        }
      }
    }
  }
  if (!found)
  {
    cout << "Invalid Item Number Entered!" << endl;
    // goto x;
  }
}
