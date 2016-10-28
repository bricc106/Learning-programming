

/* Author: Kyle Holland
   Program Name: Assignment04 */



#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cstdio>

using namespace std;

const float PI = 3.14159;


  float areaCircle(float radius)
  {
    float area = PI * radius * radius;
    return area;
  }

  float circumCircle(float radius)
  {
    float circumference = PI * radius * 2;
    return circumference;
  }

  float areaCylinder(float radius, float height)
  {
    float area = 2 * PI * radius * radius + height * PI * radius * 2;
    return area;
  }

  float volumeCylinder(float radius, float height)
  {
    float volume = PI * radius * radius * height;
    return volume;
  }

  float volumeCone(float radius, float height)
  {
    float volume = .3333 * PI * radius * radius * height;
    return volume;
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
