/**
    Author - Kyle Holland
    File Name - Desk estimate
    Remarks - used to calculate the cost of a desk.
**/




#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{

string customername;
float length;
char proceed;
float width;
char woodType;
int drawers;
float surface;
float deskcost;
float costDrawers;
deskcost = 200.00;


cout << "enter Customer Name " << endl;
//cin.ignore();
getline(cin,customername);
cout << "enter length " << endl;
cin >> length;
cout << "enter width\n ";
cin >> width;
cout << "enter wood type\n ";
cin >> woodType;
cout << "enter number of drawers\n ";
cin >> drawers;


//calculations
surface = length * width;


if (surface > 750)
{deskcost += 50.00;}


switch (woodType)
{
  case 'm':
  case 'M':  deskcost += 150.00;
             break;
  case 'o':
  case 'O':  deskcost += 125.00;
             break;
  case 'p':
  case 'P':  deskcost += 100.00;
            break;
  default:{}
}

   costDrawers = drawers * 30;
   deskcost += costDrawers;
   cout << setfill('-')<<endl;
   cout << setw(10) << customername << ", ";
   cout << "your desk estimate is ";
   cout << setw(10) << deskcost <<endl;

return 0;

}
