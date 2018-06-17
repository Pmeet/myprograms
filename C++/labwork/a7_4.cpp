#include<iostream>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
system("cls");
ifstream fs;
ofstream ft;
char ch, fname1[20], fname2[20];
cout<<"Enter source file name with extension (like files.txt) : ";
gets(fname1);
fs.open(fname1);
if(!fs)
{
cout<<"Error in opening source file..!!";

exit(1);
}
cout<<"Enter target file name with extension (like filet.txt) : ";
gets(fname2);
ft.open(fname2);
if(!ft)
{
cout<<"Error in opening target file..!!";
fs.close();

exit(2);
}
while(fs.eof()==0)
{
fs>>ch;
ft<<ch;
}
cout<<"File copied successfully..!!";
fs.close();
ft.close();

return 0;
}
