#include <iostream>
#include <iomanip>


using namespace std;

int main ()
{


int num;


cin >> num;

    if ((num > 0) && (num < 50))
    {
        num = num + 1;
        cout <<  "W" << setw(num) << setfill('o') << "w" << endl;



    }













return 0;


}
