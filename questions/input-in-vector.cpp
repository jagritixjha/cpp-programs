// program to take user input as the multiple sentences one by one using vector nd print the sentences. 

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  int n;

  cout << "Enter number of lines: ";
  cin >> n;
  cin.ignore(); // Clear the newline character left in the input buffer

  vector<string> lines;

  // Read lines from user input
  for (int i = 0; i < n; i++)
  {
    cout << "Enter line " << i + 1 << ": ";
    string line;
    getline(cin, line);
    lines.push_back(line);
  }

  // Display the lines
  cout << "Entered lines:" << endl;
  for (const string &line : lines)
  {
    cout << line << endl;
  }

  return 0;
}
