#include <iostream>
#include <cmath>

using namespace std;

int main ()
{
char fizz;
char buzz;
char fizzBuzz;
int i;



    for (i = 1;i < 101;i++)
    {

          if ((i % 3 != 0) && (i % 5 != 0))
          {
            cout << i << endl;
          }

    else {

            if ((i % 3 == 0) && (i % 5 == 0))
            {
              cout << "FizzBuzz\n";
            }

    else {

            if (i % 3 == 0)
            {
              cout << "fizz\n";
            }

            if (i % 5 == 0)
            {
              cout << "buzz\n";
            }
      }//end of first else.
    }//end of second else.



    }




return 0;

}
