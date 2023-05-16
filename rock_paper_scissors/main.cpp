#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){
    srand(time(0));
    char user;
    char robot;
    int random;

    cout << "Choose Rock(r) , Paper (p) , Scissors(s)";
    cin >> user;

    random = rand() % 3;
    switch (random)
    {
    case 0:
        robot = 'r';
        cout << "The robot choose rock" << endl;
        break;
    case 1:
        robot = 'p';
        cout << "The robot choose paper" << endl;
        break;
    case 2:
        robot = 's';
        cout << "The robot choose scissors" << endl;
        break;
    default:
        break;
    }
    
   if (user  == robot)
   {
    cout << "Its a draw";
   }
   else if (user == 'r')
   {
     if (robot == 'p')
     {
        cout << "robot wins";
     }
     else if (robot == 's')
     {
        cout << "user wins";
     }
   }

   else if (user == 'p')
   {
     if (robot == 's')
     {
        cout << "robot wins";
     }
     else if (robot == 'r')
     {
        cout << "user wins";
     }
   }
    else if (user == 's')
   {
     if (robot == 'r')
     {
        cout << "robot wins";
     }
     else if (robot == 'p')
     {
        cout << "user wins";
     }
   }

    return 0;
}