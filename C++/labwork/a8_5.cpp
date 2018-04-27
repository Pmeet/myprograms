
/*W.A.P. that throws an arithmetic exception whenever the result of arithmetic computation
becomes divisible by 3.*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int x=12,y=6;
//system("cls");
try
{
if((x-y)%3==0)
throw x-y;
}
catch(int z)
{
cout<<"caught:"<<z;
}
//getch();
return 0;
}
