#include "iostream"
#include "iomanip"
using namespace std;

class GetData // class A
{
protected:
  int a;
  int b;

public:
  void setA()
  {
    cout << "Enter value of A: ";
    cin >> a;
    // cout << a << "\n";
    cout << "Enter value of B: ";
    cin >> b;
    // cout << b << "\n";
  }
};

class Addition : public GetData // class B --> A
{
public:
  void add()
  {
    setA();
    cout << "Addition: " << a << " + " << b << " = " << a + b << endl;
  }
};

class Substraction : public GetData // class C --> A
{
public:
  void subtract()
  {
    setA();
    cout << "Subtraction: " << a << " - " << b << " = " << a - b << endl;
  }
};

class Multiplication : public Addition // class D --> B
{
public:
  void multiply()
  {
    setA();
    cout << "Multiplication: " << a << " * " << b << " = " << a * b << endl;
  }
};

class Division : public Addition // class E --> B
{
public:
  void divide()
  {
    setA();
    cout << "Division: " << a << " / " << b << " = " << a / b << endl;
  }
};

class Modulo : public Substraction // class F --> C
{
public:
  void modulus()
  {
    setA();
    cout << "Modulus: " << a << " % " << b << " = " << a % b << endl;
  }
};

class Greet : public Substraction // class G --> C
{
public:
  void feedback()
  {
    cout << "Thank You!!" << endl;
  }
};

int main()
{
  // Addition a;       // class b -- inherits class A i.e setA values
  Multiplication d; // class d
  Division e;       // class e
  Modulo f;         // class f
  Greet g;          // class g

  int choice;
  cout << "Enter ur choice: " << endl
       << "1.Addition" << setw(20) << "2.Substraction" << setw(22) << "3.Multiplication" << setw(15) << "4.Division" << setw(15) << "5.Modulo" << setw(15) << "6.Exit" << endl;
  cin >> choice;

  switch (choice)
  {
  case 1:
    d.add();
    break;

  case 2:
    f.subtract();
    break;

  case 3:
    d.multiply();
    break;

  case 4:
    e.divide();
    break;

  case 5:
    f.modulus();
    break;

  case 6:
    g.feedback();
    break;

  default:
    cout << "Invalid Choice!" << endl;
    break;
  }
}
