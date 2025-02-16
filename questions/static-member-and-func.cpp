#include "iostream"
using namespace std;

class Stat
{
private:
  static int n;

public:
  void getData()
  {
    cout << "Value of static member : " << n << endl;
  }

  void operator++(int d)
  {
    n++;
  }
};

int Stat ::n = 5;

int main()
{
  Stat obj, obj2;
  obj++;
  obj.getData();
  obj2.getData();
  return 0;
}