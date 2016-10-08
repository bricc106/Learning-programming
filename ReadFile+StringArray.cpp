#include <iostream>
//#include <iomanip>
//#include <cmath>
#include <string>
#include <fstream>
using namespace std;

int main ()
{
string stoogeName = "unknown";
string longestString;
int longest;
string testString[9] = {"qwe", "wert", "ertyu", "rtngjg", "jfjfh", "jdjdbfvjn", "jdfhgdfbj", "dbfjdfn", "rhfhfg"};
int i;

longest = 0;
  for (i = 0; i < 9; i++)
  {
      cout << testString[i].length() << endl;
      if (longest < (testString[i].length())) {
        longest = (testString[i].length());
        longestString = testString[i];
       }
  }

cout << longest << endl;
cout << "Longest String is ''" << longestString << "''" << endl;

ofstream outputfile;
outputfile.open("Stooges.txt");

outputfile << "tarzan\n";
outputfile << "Johnson\n";
outputfile << "Omay\n";
outputfile << "arryLay\n";
outputfile << "CurlyCue\n";
outputfile << "Christine McIntyre\n";
outputfile << "MrsSmiteSmite\n";
outputfile.close();

//while (inputfile >> stoogeName)

ifstream inputFile;
inputFile.open("Stooges2.txt");

i=0;
while (inputFile >> stoogeName)
{
  i++;
  cout << "Name number :" << i << " is " << stoogeName << endl;
}

//Instead of names readIn integers.

inputFile.close();

cout << "hello world \n ";
// system ("pause") ;
return 0;
}
