#include <iostream>
using namespace std;

int main ()
{
float PayRate;
float Hours;
float GrossPay;
cout << "Enter your payrate" << endl;
cin >> PayRate;
cout << "Enter your number of hours worked" << endl;
cin >> Hours;
GrossPay = PayRate * Hours;
cout << "An employee with a pay rate of $" << PayRate << endl;
cout << "And number of hours worked of " << Hours << "Hrs" << endl;
cout << "Would have a gross pay of $" << GrossPay << endl;
return 0;
}
