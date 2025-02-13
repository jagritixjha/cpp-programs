#include <iostream>
using namespace std;

class RailwayRecords
{
private:
  int train_number;
  string train_name;
  string source;
  string destination;
  string train_time;

public:
  RailwayRecords()
  {
    train_number = 0;
    train_name = "";
    source = "";
    destination = "";
    train_time = "";
  }
  void setter()
  {
    cout << endl
         << "Enter train number: ";
    cin >> train_number;
    cin.ignore();
    cout << "Enter train name: ";
    getline(cin, train_name);
    cout << "Enter train source: ";
    getline(cin, source);
    cout << "Enter train destination: ";
    getline(cin, destination);
    cout << "Enter train time: ";
    getline(cin, train_time);
    cout << "----------------------" << endl;
  }
  void getter()
  {
    cout << endl
         << "Train Number : " << train_number << endl;
    cout << "Train Name : " << train_name << endl;
    cout << "Train Source : " << source << endl;
    cout << "Train Destination : " << destination << endl;
    cout << "Train Time : " << train_time << endl;
  }
  int getTrainNumber()
  {
    return train_number;
  }
};

int main()
{
  int n, i, search, found = 0;
  cout << "Enter number of trains(min. three): ";
  cin >> n;
  RailwayRecords tr[n];

  for (i = 0; i < n; i++)
  {
    cout << endl
         << "Enter details of train " << i + 1 << endl;
    tr[i].setter();
  }

x:
  cout << endl
       << "Enter train number to search : ";
  cin >> search;
  for (i = 0; i < n; i++)
  {
    if (tr[i].getTrainNumber() == search)
    {
      tr[i].getter();
      found++;
    }
  }

  if (!found)
  {
    cout << "Invalid Train Number Entered!" << endl;
    goto x;
  }

  // cout << "Enter x";
  return 0;
}