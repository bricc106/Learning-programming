

/**
    Author - Kyle Holland
    File Name - Desk estimate
    Remarks - used to calculate the cost of a desk.
**/




#include <iostream>
#include <cmath>
#include <string>

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
int countMah = 0;
int countOak = 0;
int countPine = 0;
deskcost = 200.00;





do {
  cout << "\nDo you want to order a desk y/n?\n ";
  cin >> proceed;






//proceed = 'q';
//while ((proceed != 'y') && (proceed != 'n'))
//{
//cout << "do you want to proceed y/n? ";
//cin >> proceed;
//}

//while (proceed == 'y') {

if (proceed == 'y')
{

//getline//.length................................

cout << "enter Customer Name " << endl;
cin.ignore();
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
   cout << "Your desk estimate is ";
   cout << deskcost <<endl;

 } //end of if statement.
 else if ((proceed != 'y') && (proceed != 'n'))
 {
   cout << "Please follow instructions! \n";
 }

 if (woodType == 'm')
  {
   countMah++;
  }

 if (woodType == 'o')
  {
   countOak++;
  }

 if (woodType == 'p')
  {
   countPine++;
  }
//it is adding 1 if 'n' is pressed to previous count.
 cout << countMah << " " << "mahogany desks\n";
 cout << countOak << " " << "oak desks\n";
 cout << countPine << " " << "pine desks\n";




 }


 while((proceed != 'n'));

return 0;



}
