
#include<iostream>
#include<fstream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
 fstream file,f2;
// system("cls");
 file.open("contact.txt",ios::in|ios::out);
 file.seekg(0);
 char ch,ch1;
 int cnt=0;
 file.get(ch);
 while(file)
 {
 ch1 = ch;
 file.get(ch);
 if( ch == ' ' && ch1 != ' ')
 {
 cout<<ch1<<" ";
 }
 if(ch != ' ' && ch1 != ' ')
 {
 cout<<ch1;
 }
 }
 file.close();

 return 0;
}
