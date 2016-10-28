#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <random>

using namespace std;

char board[10][10];
int currentX;
int currentY;
const int north = 0;
const int east = 1;
const int south = 2;
const int west = 3;
char walker[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int currentAlpha = 0;
bool gameOver;
int myRandom;
int directionFailCount = 0;
char directionals;
//use ascii 65 for alphabet.
int getrandomnumber(int lowRange, int highRange)
{
int currentSeconds;
time_t tim = time( NULL );
struct tm *ltim = localtime(&tim);
// cout << "It is now " << asctime(ltim) << endl;
char myTime[30];

strcpy(myTime, asctime(ltim));
currentSeconds = ltim->tm_sec;
// cout << "Current time seconds is " << currentSeconds << endl;
if ((ltim->tm_sec >= lowRange) && (ltim->tm_sec <= highRange))
      {
      return currentSeconds;
      }
else //number is out of desired range.
      {
      while (currentSeconds > highRange)
            {
            currentSeconds -= highRange;
            }
//      abs(currentSeconds);
      return abs(currentSeconds);
      }

}//end of function.

void showPath()
{
  int i,j;

  for (i = 0;i < 10; i++)
  {
      for (j = 0; j < 10; j++)
      {
       cout << board[i][j] << " ";
      }
      cout << endl;
  }
}

void walk(int direction)
{

  if (directionFailCount == 4) //  tried all 4 directions, cant go anywhere
  {
    gameOver = true;
    return;
  }

  switch (direction)
  {
  case north: // 0 = north
//          cout << "case North, currentY = " << currentY << " currentX = " << currentX << endl;
//          cout << "board[currentY - 1][currentX] = " << board[currentY - 1][currentX] << endl;
          if (currentY == 0) // Drunk reached north boundary change to east
          {
            walk(east);
          }
          else if (board[currentY - 1][currentX] == '.') // Drunk can walk there.
          {
            cout << "drunk can walk north" << endl;
            if (directionals == 'y')
              board[currentY - 1][currentX] = '^';
            else
              board[currentY - 1][currentX] = walker[currentAlpha];
            currentY--;
            currentAlpha++;
            if (currentAlpha == 26) gameOver = true;
            directionFailCount = 0;
            showPath();
//            cout << "currentY = " << currentY << " currentX = " << currentX << endl;
          }
          else if (board[currentY - 1][currentX] != '.') // Drunk already walked there.
          {
              if (board[currentY - 1][currentX] == 'z')
              {
                gameOver = true;
                return;
              }
              else // Drunk cant go north. Change direction.
              {
                cout << "drunk can NOT walk north" << endl;
                directionFailCount++;
                walk(east);
              }
          }
          break;

    case east: // 1 = east
//    cout << "case East, currentY = " << currentY << " currentX = " << currentX << endl;
//    cout << "board[currentY][currentX+1] = " << board[currentY][currentX+1] << endl;
    if (currentX == 9) // Drunk reached eastern boundary change to south
    {
      walk(south);
    }
    else if (board[currentY][currentX + 1] == '.') // Drunk can walk there.
    {
      cout << "drunk can walk east" << endl;
      if (directionals == 'y')
        board[currentY][currentX + 1] = '>';
      else
        board[currentY][currentX + 1] = walker[currentAlpha];
      currentX++;
      currentAlpha++;
      if (currentAlpha == 26) gameOver = true;
      directionFailCount = 0;
      showPath();
//      cout << "currentY = " << currentY << " currentX = " << currentX << endl;
    }
    else if (board[currentY][currentX + 1] != '.') // Drunk already walked there.
    {
        if (board[currentY][currentX + 1] == 'z')
        {
          gameOver = true;
          return;
        }
        else // Drunk can't go east. Change direction.
        {
          cout << "drunk can NOT walk east" << endl;
          directionFailCount++;
          walk(south);
        }
    }
    break;

    case south: // 2 = south
//    cout << "case South, currentY = " << currentY << " currentX = " << currentX << endl;
//    cout << "board[currentY + 1][currentX] = " << board[currentY + 1][currentX] << endl;
    if (currentY == 9) // Drunk reached southern boundary change to south
    {
      walk(west);
    }
    else if (board[currentY + 1][currentX] == '.') // Drunk can walk there.
    {
      cout << "drunk can walk south" << endl;
      if (directionals == 'y')
        board[currentY + 1][currentX] = 'v';
      else
        board[currentY + 1][currentX] = walker[currentAlpha];
      currentY++;
      currentAlpha++;
      if (currentAlpha == 26) gameOver = true;
      directionFailCount = 0;
      showPath();
//      cout << "currentY = " << currentY << " currentX = " << currentX << endl;
    }
    else if (board[currentY + 1][currentX] != '.') // Drunk already walked there.
    {
        if (board[currentY + 1][currentX] == 'z')
        {
          gameOver = true;
          return;
        }
        else // Drunk can't go South. Change direction.
        {
          cout << "drunk can NOT walk south" << endl;
          directionFailCount++;
          walk(west);
        }
    }
    break;

    case west: // 3 = west
//    cout << "case west, currentY = " << currentY << " currentX = " << currentX << endl;
//    cout << "board[currentY][currentX-1] = " << board[currentY][currentX-1] << endl;
    if (currentX == 0) // Drunk reached western boundary change to south
    {
      walk(north);
    }
    else if (board[currentY][currentX - 1] == '.') // Drunk can walk there.
    {
      cout << "drunk can walk west" << endl;
      if (directionals == 'y')
        board[currentY][currentX - 1] = '<';
      else
        board[currentY][currentX - 1] = walker[currentAlpha];
      currentX--;
      currentAlpha++;
      if (currentAlpha == 26) gameOver = true;
      directionFailCount = 0;
      showPath();
//      cout << "currentY = " << currentY << " currentX = " << currentX << endl;
    }
    else if (board[currentY][currentX - 1] != '.') // Drunk already walked there.
    {
        if (board[currentY][currentX - 1] == 'z')
        {
          gameOver = true;
          return;
        }
        else // Drunk can't go west. Change direction.
        {
          cout << "drunk can NOT walk west" << endl;
          directionFailCount++;
          walk(north);
        }
    }
    break;
  }

}

int main ()
{

char junk;
int i;
int j;


for (i = 0;i < 10; i++)
{
    for (j = 0; j < 10; j++)
    {
    board[i][j] = '.';
    }
}


cout << "Where do you want to start? (x coordinate) \n";
cin >> currentX;
cout << "Where do you want to start? (y coordinate) \n";
cin >> currentY;
cout << " Do you want directional arrows? (y/n)" << endl;
cin >> directionals;

while (gameOver == false)
{
myRandom = getrandomnumber(0,3);
cout << "This is random number "<< myRandom << endl;
walk(myRandom);
cout << "press Y to continue: ";
cin >> junk;
}

showPath();


return 0;

}
