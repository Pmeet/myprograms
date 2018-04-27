/*Write a function template for finding the minimum value contained in an array*/
#include<iostream>
#include<conio.h>
using namespace std;
template <class T>
T getmin(T a[],int n)
{
int i;
T min;
min=a[0];
for(i=1;i<n;i++)
{
if(a[i]<min)
min=a[i];
}
return (min);
}
int main()
{
//system("cls");
int ia[4];
char ca[4];
float fa[4];
int i;
cout<<"Enter 4 int:";
for(i=0;i<4;i++)
cin>>ia[i];
cout<<"Enter 4 char:";
for(i=0;i<4;i++)
cin>>ca[i];
cout<<"Enter 4 float:";
for(i=0;i<4;i++)
cin>>fa[i];
cout<<"Minimums are:";
cout<<"\n Int Minimum:"<<getmin(ia,4)<<"\n Char min:"<<getmin(ca,4)<<"\n Float min:"<<getmin(fa,4);
//getch();
return 0;
}
