/**
    Author - Kyle Holland
    File Name - Desk calculator 2
    Remarks - used to calculate the cost of a desk.
**/




#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cstdio>

using namespace std;

int main ()
{

string woodLong;
string customername;
float length;
char proceed = 'y';
float width;
char woodType;
int drawers;
float surface;
float costDrawers;
int numDesk;
float totalDesk;
float deskAverage;
float mostExpensive = 0;
float leastExpensive;
char mahogany;
int countMah = 0;
int countOak = 0;
int countPine = 0;
float deskcost = 200.00;
int countOther;
int baseCost = 200;
float surfAdd = 0;
float woodCost = 0;





while (proceed != 'n')
    {
      cout << "\nDo you want to order a desk y/n?\n ";
      cin >> proceed;

      if (proceed == 'y')
      {

      deskcost = 200.00;

      cout << "Enter customer name\n ";
      cin.ignore();
      getline(cin,customername);
      cout << "Enter length\n ";
      while (!(cin >> length))
        {
        cout << "Enter a number for length\n ";
        cin >> length;
        cin.clear ();
        cin.ignore();
        }

      cout << "Enter width\n ";
      while (!(cin >> width))
        {
        cout << "Enter a number for width\n ";
        cin >> width;
        cin.clear ();
        cin.ignore();
        }

      cout << "Enter wood type m, o, p or other(b)\n ";
      cin >> woodType;
      while (woodType != 'm' &&
             woodType != 'o' &&
             woodType != 'p' &&
             woodType != 'b')
        {
        cout << "Enter wood type m, o, p or other(b)\n ";
        cin >> woodType;
        cin.clear ();
        cin.ignore();
        }

      cout << "Enter number of drawers\n ";
      while (!(cin >> drawers))
        {
        cout << "Enter a number for drawers\n ";
        cin >> drawers;
        cin.clear ();
        cin.ignore();
        }



      //calculations
      surface = length * width;


      if (surface > 750)
        {
        deskcost += 50.00;
        surfAdd = 50.00;
        }


      switch (woodType)
      {
        case 'm':
        case 'M':  deskcost += 150.00;
                   countMah++;
                   break;
        case 'o':
        case 'O':  deskcost += 125.00;
                   countOak++;
                   break;
        case 'p':
        case 'P':  deskcost += 100.00;
                   countPine++;
                   break;
        case 'b':
        case 'B':  countOther++;
                   break;

        default:{}
      }//End of switch 1.



      /*****Final totals*****/
      costDrawers = drawers * 30;
      deskcost += costDrawers;
      totalDesk = totalDesk + deskcost;
      numDesk = countPine + countOak + countMah + countOther;
      deskAverage = totalDesk/numDesk;


      if (numDesk == 1)
        {
        leastExpensive = deskcost;
        // the first time thru the loop deskcost IS the least expensive
        }
      if (deskcost > mostExpensive)
        {
        mostExpensive = deskcost;
        }
      if (leastExpensive > deskcost)
        {
        leastExpensive = deskcost;
        }



        switch (woodType)
        {
          case 'm':
          case 'M':  woodCost = 150.00;
                     woodLong = "Mahogony";
                     break;
          case 'o':
          case 'O':  woodCost = 125.00;
                     woodLong = "Oak";
                     break;
          case 'p':
          case 'P':  woodCost = 100.00;
                     woodLong = "Pine";
                     break;
          case 'b':
          case 'B':  woodLong = "Other";
                     break;
          default: {}
        }//End of switch 2.





       cout << "\n\n\t\tCustomer Name: " << customername <<endl;
       cout << internal << setw(30) << setprecision(2) << fixed << "Desk length " << length << endl;
       cout << internal << setw(30) << "Desk width " << width << endl;
       cout << internal << setw(30) << "Number of drawers " << drawers << endl;
       cout << internal << setw(30) << "Wood type " << woodLong << endl;


       cout << "\n\n\n\t\t  ******Wood Totals******\n";
       cout << setw(30) << countMah << " mahogany desks\n";
       cout << setw(30) << countOak << " oak desks\n";
       cout << setw(30) << countPine << " pine desks\n";
       cout << setw(30) << countOther << " other desks\n\n\n";


       cout << "\t\t  ******Cost Estimate******\n";
       cout << setw(30) << setprecision(2) << fixed << baseCost << " Base cost\n";
       cout << setw(30) << surfAdd << " Surface area bonus\n";
       cout << setw(30) << costDrawers << " Additonal drawers cost\n";
       cout << setw(30) << woodCost << " " << woodLong << " adds this much to total\n";
       cout << "\t       -----------------------------\n";
       cout << setw(30) << deskcost << " Total\n\n\n";


       cout << "\t\t  ******Desk Totals******\n";
       cout << setw(30) << numDesk << " Total number of desks\n";
       cout << setw(30) << setprecision(2) << fixed << totalDesk << " Total cost of all desks\n";
       cout << setw(30) << deskAverage << " Average cost of all desks\n";
       cout << setw(30) << mostExpensive << " The most expensive desk\n";
       cout << setw(30) << leastExpensive << " The least expensive desk\n" << endl;





       }//end of first IF statement.


    }//end of first while.

return 0;



}
