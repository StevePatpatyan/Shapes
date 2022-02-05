// base code file

#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <sstream>
#include <fstream>
#include <iomanip>
using namespace std;
void gotoxy(short x, short y) {
	COORD pos = {x, y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	}
// generates a random number between 0 and r inclusive
int random(int r)
{
    return rand()% r + 1;
}  
///////////////////////////////////////////////////////////////////////
main()
{
      srand(time(NULL)); 
  // write code here
//cout<<"Stephen";  // leave the following line in all programs
//cout<<endl<<"Luke";
//cout<<endl<<"Amani\nChawin";
//getch();
//      int a;
//      a=0;
//      char s;
//      while (true)
//{
//while (kbhit()==0)
//{
//gotoxy(15,12);
//cout<<"    ";
//gotoxy(15,12);
//cout<<random(1000);
//}
//a=1;
//while (a==1)
//{
//getch();
//if (getch())
//a=0;
//}
//}
double bal=0;
double multi=1000000000;
bal=bal+multi;

cout<<setprecision(100000000000000)<<bal;
}


