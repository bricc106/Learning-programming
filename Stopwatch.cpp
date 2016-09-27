#include <iostream>
using namespace std;

int main ()
{
int num;
//int count;
int i;
int j;
num = 0;
bool done;
done = false;

while (done == false)
{

do {
   for (i = 0; i < 22000; ++i) {
      for (j = 0; j < 18000; j++){
      } // end of for i loop
   } // end of for j loop

  cout << num;
  num++;
  cout << "\a";
  cout << endl;
  } while (num < 20);

do
  {
  for (i = 0; i < 22000; ++i) {
     for (j = 0; j < 18000; j++){
     } // end of for i loop
  } // end of for j loop

  cout << num;
  num--;
  cout << "\a";
  cout << endl;

} while (num > 0);

} // end of while done == false loop

return 0;
}
