#include<iostream>
#include<fstream>
#include<ctype.h>
#include<conio.h>
using namespace std;
int main()
{
 ifstream fin;
 fin.open("meet1.txt");
 ofstream fout;
 fout.open("meet2.txt");
 char ch;
 while(!fin.eof())
 {
 fin.get(ch);
 if(ch>=97 && ch<=122)
 {
 ch=toupper(ch);
 }
 else if(ch>=65 && ch<=90)
 {
 ch=tolower(ch);
 }
 fout<<ch;
 }
 cout<<"\n Data has been copied";
 fin.close();
 fout.close();

 return 0;
}

