#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<fstream>
using namespace std;
int main( )
{
ofstream outfile;
ifstream infile;
char fname1[10],fname2[20];
char ch,uch;
system("cls");
cout<<"Enter a file name to be copied ";
cin>> fname1;
cout<<"Enter new file name";
cin>>fname2;
infile.open(fname1);
if( infile.fail( ) )
{
cerr<< " No such a file Exit ";
exit(1);
}
outfile.open( fname2);
if(outfile.fail( ))
{
cerr<<"Unable to create a file";
exit(1);
}
while( !infile.eof( ) )
{
ch = (char) infile.get( );
uch = tolower(ch);
cout<<"done";
outfile.put(uch);
}
infile.close( );

outfile.close( );
return 0;
}

