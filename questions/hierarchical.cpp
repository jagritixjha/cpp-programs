/*

  Write a Program to demonstrate an example of hierarchical inheritance to get the square and cube of a number.

 */

#include <iostream>
using namespace std;

class GetData
{
protected:
  int a;

public:
  void getData()
  {
    cout << "Enter Value of A: ";
    cin >> a;
  };
};

class Square : public GetData
{
public:
  void square()
  {
    getData();
    cout << "Square = " << a * a << endl;
  }
};

class Cube : public GetData
{
public:
  int cube()
  {
    getData();
    cout << "Cube = " << a * a * a << endl;
  }
};

int main()
{
  Square s;
  s.square();

  Cube c;
  c.cube();

  return 0;
}