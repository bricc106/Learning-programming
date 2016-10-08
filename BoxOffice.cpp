/**
    Author - Kyle Holland
    File Name - Box Office
    Remarks - used to calculate numerous movie theatre statistics.
**/




#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main ()
{

string movieName;
int adultSold;
int childSold;
float grossProfit;
float netProfit;
float amountPaid;

cout << "Enter movie name\n ";
getline(cin, movieName);
cout << "Enter number of adult tickets sold\n ";
cin >> adultSold;
cout << "Enter number of child tickets sold\n ";
cin >> childSold;

grossProfit = adultSold * 6.00 + childSold * 3.00;
netProfit = grossProfit*.2;
amountPaid = grossProfit - netProfit;


cout << left << setw(40) << setprecision(2) << fixed << "\tMovie name: " << "\"" << movieName << "\"" << endl;
cout << left << setw(40) << "\tAdult tickets sold: " <<adultSold << endl;
cout << left << setw(40) << "\tChild tickets sold: " << childSold << endl;
cout << left << setw(40) << "\tGross box office profit: " << "$" << grossProfit << endl;
cout << left << setw(40) << "\tNet box office profit: " << "$" << netProfit << endl;
cout << left << setw(40) << "\tAmount paid to distributor: " << "$" << amountPaid << endl;

return 0;


}
