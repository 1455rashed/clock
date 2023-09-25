#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
//variable
int Hour;
int Minute;
int Second;
//end of variable

//input
cout<<"Hour : ";
cin>>Hour;
cout<<"Minute : ";
cin>>Minute;
cout<<"Second : ";
cin>>Second;
//start of while
while(true)
{
//Clear Screen
    system("cls");
//start of if
    if(Second>59)
    {
        Minute++;
        Second=0;
    }
    if (Minute>59)
    {
    Hour++;
    Minute=0;
    }
    if(Hour>23)
    {
        Hour=0;
    }
//end of if
cout<<Hour <<":"<< Minute <<":"<< Second ;
Second++;
Sleep(960);
}
//end of while
    return 0;
}
