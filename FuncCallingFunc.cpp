/* Author: Kyle Holland
   Program Name: FuncCallingFunc */



#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cstdio>

using namespace std;

const float PI = 3.14159;

  float areaCircle(float radius)
  {
    float areaCir = PI * radius * radius;
    return areaCir;
  }

  float circumCircle(float radius)
  {
    float circumference = PI * radius * 2;
    return circumference;
  }

  float areaCylinder(float radius, float height)
  {
    float areaCyl = circumCircle(radius) * radius + height * areaCircle(radius) * 2;
    return areaCyl;
  }

  float volumeCylinder(float radius, float height)
  {
    float volumeCyl = areaCircle(radius) * height;
    return volumeCyl;
  }

  float volumeCone(float radius, float height)
  {
    float volumeCo = .3333 * volumeCylinder(radius, height);
    return volumeCo;
  }


int main()
{

int radius;
int height;

    cout << "Enter radius\n";
    cin >> radius;
    cout << "Enter height\n";
    cin >> height;

    cout << "Radius is " << radius << endl;
    cout << "Height is " << height << endl;
    cout << "Area of the circle is " << areaCircle(radius) << endl;
    cout << "Circumference of the circle is " << circumCircle(radius) << endl;
    cout << "Area of the cylinder is " << areaCylinder(radius, height) << endl;
    cout << "Volume of the cylinder is " << volumeCylinder(radius, height) << endl;
    cout << "Volume of the cone is " << volumeCone(radius, height) << endl;

return 0;

}
