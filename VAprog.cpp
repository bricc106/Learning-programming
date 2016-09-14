#include <iostream>
#include <cmath>
#include <math.h>
#define _USE_MATH_DEFINES
using namespace std;

int main ()
{
float radius;
float height;
float volume;
float surface;
cout << "Enter radius " << endl;
cin >> radius;
cout << "Enter height" << endl;
cin >> height;
volume = M_PI * pow ( radius, 2.0 ) * height;
surface = 2 * M_PI * radius * height + 2 * M_PI * pow (radius, 2.0);
cout << "A cylinder with a radius of " << radius << endl;
cout << "and a height of " << height << endl;
cout << "Has a surface area of " << surface << endl;
cout << "and a volume of " << volume << endl;
return 0;
}
