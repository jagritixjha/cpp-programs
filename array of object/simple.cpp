#include <iostream>
using namespace std;

class A
{
private:
  int a, b;

public:
  void setData()
  {
    cout << "Enter vaLue of a: ";
    cin >> a;
    cout << "Enter vaLue of b: ";
    cin >> b;
  }
  void getData()
  {
    cout << "value of a is " << a << endl;
    cout << "value of b is " << b << endl;
  }
};

int main()
{
  A ee[4];
  for (int i = 0; i < 4; i++)
  {
    cout << "Enter value of a and b for index " << i << endl;
    ee[i].setData();
  }

  cout << "=================" << endl;
  
  for (int i = 0; i < 4; i++)
  {
    cout << "value of a and b at index " << i << endl;
    ee[i].getData();
  }

  return 0;
}
