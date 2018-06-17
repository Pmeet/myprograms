
/*WAP that illustrates the application of multiple catch statements*/
#include<iostream>
using namespace std;
void test(int x)
{
try
{
if(x>0)
throw x;
else
throw 'x';
}
catch(int x)
{
cout<<"Catch an integer and that integer is:"<<x<<endl;
 }
catch(char x)
{
cout<<"Catch a character and that character is:"<<x;
}
}
int main()
{
cout<<"Testing multiple catches:\n";
test(10);
test(0);
return 0;
}
