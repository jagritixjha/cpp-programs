#include <iostream>
#include "iomanip"
using namespace std;

class RBI
{
protected:
  double dollarRate = 82.67;
  double roi = 6.50;

public:
  void getRate()
  {
    cout << "Dollor\t" << dollarRate << endl
         << "ROI\t" << roi << endl;
  }
};

class SBI : virtual public RBI
{
protected:
  double sbi_roi = roi + 1.35;

public:
  void
  getsbiROI()
  {
    cout << "SBI ROI \t" << sbi_roi << endl;
  }
};

class BOB : virtual public RBI
{
protected:
  double bob_roi = roi + 1.35;

public:
  void getBobROI()
  {
    cout << "BOB ROI \t" << bob_roi << endl;
  }
};

class ICICI : virtual public RBI
{
protected:
  double icici_roi = roi + 1.50;

public:
  void getICICIroi()
  {
    cout << "ICICI ROI \t" << icici_roi << endl;
  }
};

class GetService : public BOB, public SBI, public ICICI
{
private:
  int choice;

public:
  void getService()
  {
    cout << "Enter ur choice : " << endl
         << "1. RBI rate" << setw(15) << "2. SBI rate" << setw(15) << "3. BOB rate" << setw(15) << "4. ICICI rate" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
      getRate();
      break;

    case 2:
      getsbiROI();
      break;

    case 3:
      getBobROI();
      break;

    case 4:
      getICICIroi();
      break;

    default:
      cout << "Invalid Choice!" << endl;
      break;
    }
  }
};

int main()
{
  GetService gs;
  gs.getService();
  return 0;
}