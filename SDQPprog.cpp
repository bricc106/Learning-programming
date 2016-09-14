#include <iostream>
using namespace std;

int main ()
{
int n1;
int n2;
int sum;
int difference;
int product;
float quotient;
cout << "please enter a number ";
cin >> n1;
cout << "please enter a number";
cin >> n2;
sum = n1 + n2;
difference = n1 - n2;
product = n1 * n2;
quotient = (float) n1/n2;
cout << "the two input numbers are \n" << n1 << " " << n2 <<endl;
cout << "the sum is " << sum << "\n";
cout << "the difference is " << difference << "\n";
cout << "the product is " << product << "\n";
cout << "the quotient is " << quotient << "\n";
return 0;
}
