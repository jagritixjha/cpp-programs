// vector usage

#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> v;
  v.push_back(10); // 1
  v.push_back(20); // 2
  v.push_back(30); // 3
  v.push_back(40); // 4
  v.push_back(50); // 5
  v.push_back(60); // 6

  v.pop_back(); // 6 --> removed 6th index value i.e 60
  v.pop_back(); // 5 --> removed 5th index value i.e 50
  v.pop_back(); // 4 --> removed 4th index value i.e 40

  v.push_back(500); // 4  placed 500 at 4th index

  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << endl;
  }

  cout << "size : " << v.size() << endl;
  cout << "capacity : " << v.capacity() << endl;
}