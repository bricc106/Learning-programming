/**
    Author - Kyle Holland
    File Name - Desk estimate
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
float deskcost;
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
deskcost = 200.00;
int countOther;
int baseCost = 200;
float surfAdd = 0;
float woodCost = 0;
int len[4];



while (proceed != 'n')
    {
      cout << "\nDo you want to order a desk y/n?\n ";
      cin >> proceed;

      if (proceed == 'y')
      {

      deskcost = 200.00;
      //getline//.length....................

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

      cout << "Enter wood type m, o, or p\n ";
      cin >> woodType;
      //while (woodType//FIGURE OUT SOMETHING FOR OTHER TYPE WOOD)
        //{

        //}
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
        default: countOther++;
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
          default:{}
        }//End of switch 2.



       len[0] = strlen("desk length");
       len[1] = strlen("Desk width");
       len[2] = strlen("Number of drawers");
       len[3] = strlen("Wood type");
       int longest = 0;
       int i;

       for (i = 0; i < 4; i++)
        {
        if (len[i] > longest) longest = len[i];
        }

       longest += 8; //This is where column starts.

       cout << "\n\nCustomer Name is " << customername <<endl;

       cout << "\tDesk length";
       for (i = 0; i < longest - strlen("desk length"); i++) {cout << " ";}
       cout << length << endl;

       cout << "\tDesk width";
       for (i = 0; i < longest - strlen("desk width"); i++) {cout << " ";}
       cout << width << endl;

       cout << "\tNumber of drawers";
       for (i = 0; i < longest - strlen("number of drawers"); i++) {cout << " ";}
       cout << drawers << endl;

       cout << "\tWood type";
       for (i = 0; i < longest - strlen("wood type"); i++) {cout << " ";}
       cout << woodLong << endl;


       cout << "\n\n\n\t******Wood Totals******\n";
       cout << setw(7) << countMah << " mahogany desks\n";
       cout << setw(7) << countOak << " oak desks\n";
       cout << setw(7) << countPine << " pine desks\n";
       cout << setw(7) << countOther << " other desks\n\n\n";


       cout << "\t******Cost Estimate******\n";
       cout << setw(7) << baseCost << " Base cost\n";
       cout << setw(7) << surfAdd << " Surface area bonus\n";
       cout << setw(7) << costDrawers << " Additonal drawers cost\n";
       cout << setw(7) << woodCost << " " << woodLong << " adds this much to total\n";
       cout << "   -----------------------------\n";
       cout << setw(7) << deskcost << " Total\n\n\n";


       cout << "\t******Desk Totals******\n";
       cout << setw(7) << numDesk << " Total number of desks\n";
       cout << setw(7) << totalDesk << " Total cost of all desks\n";
       cout << setw(7) << deskAverage << " Average cost of all desks\n";
       cout << setw(7) << mostExpensive << " The most expensive desk\n";
       cout << setw(7) << leastExpensive << " The least expensive desk\n" << endl;





       }//end of first IF statement.


    }//end of first while.

return 0;



}
