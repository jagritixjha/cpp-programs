#include <iostream>
#include <string>
using namespace std;

int main()
{
  string name;
  cout << "Enter your name: ";
  // cin >> name; // takes only one word
  getline(cin, name);
  cout << "Hello " << name << endl;
  cout << name[1];
  name[1] = 'j';
  cout << "\n"
       << name;
}