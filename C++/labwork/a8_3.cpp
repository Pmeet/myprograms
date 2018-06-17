#include<iostream>
#include<conio.h>
using namespace std;
template <class T>
class stack
{
private:
T s[10];
int top;
public:
stack()
{
top = -1;
}
void push(T i)
{
top++;
s[top]=i;
cout<<"\n"<<s[top]<<" is successfully pushed";
}
T pop()
{
T x=s[top];
top--;
return x;
}
void disp()
{
int i;
cout<<"\n";
for(i=0;i<=top;i++)
{
cout<<s[i]<<" ";
}
}
};
int main()
{

stack <int>s1;
//system("cls");
s1.push(1);
s1.disp();
s1.push(5);
s1.disp();
s1.push(6);
s1.disp();
cout<<"\n"<<s1.pop()<<" is poped successfully...";
s1.disp();
//getch();
return 0;
}
