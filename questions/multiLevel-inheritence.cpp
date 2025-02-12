#include <iostream>
using namespace std;

class P
{
protected:
  float a;

public:
  void setdata()
  {
    cout << "Enter temperature in celcius: ";
    cin >> a;
  }
};

class Q : public P
{
public:
  void toFehrenheit()
  {
    cout << endl
         << a << " celcius = " << (a * 9 / 5) + 32 << " Fehrenheit" << endl;
    a = (a * 9 / 5) + 32;
  }
};

class R : public Q
{
public:
  void toKelvin()
  {
    cout << a << " fahrenheit = " << (a - 32) * 5 / 9 + 273.15 << " Kelvin" << endl;
  }
};

int main()
{
  R temp;
  temp.setdata();
  temp.toFehrenheit();
  temp.toKelvin();
}