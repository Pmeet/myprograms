/*"Declare a template class called exam having an array of generic type as a data member,
named elements[10]. Define following generic (template) member functions:
- sort to arrange elements in ascending order
- find_max to find and return maximum from the array
Define main to illustrate usage of these functions to process two different types of data."*/
#include <iostream>
#include <conio.h>
using namespace std;
template <class T>
class Sort
{
private:
T n[5];
public:
void get()
{
for(int i=0; i<5; i++)
{
cout<<"Enter value "<<i+1<<" : ";
cin >> n[i];
}
}
T findMax()
{
int i;
T max;
max=n[0];
for(i=0;i<5;i++)
{
if(max < n[i])
max=n[i];
}
return max;
}
void sort()
{
int i, j;
for(i=0;i<4;i++)
{
for(j=i+1;j<5;j++)
{
if(n[i]>n[j])

{
T element;
element = n[i];
n[i] = n[j];
n[j] = element;
}
}
}
}
void display()
{
for(int i=0;i<5;i++)
cout<<n[i]<<"\n";
}
};
int main()
{
Sort <int>intn;
Sort <float>floatn;
//system("cls");
cout << "Integer Values \n";
intn.get();
cout << "Float values \n";
floatn.get();
//system("cls");
cout<<"Int maximum: "<<intn.findMax()<<endl;
cout <<"Int sorting:"<< endl;
intn.sort();
intn.display();
cout<<"float maximum: "<<floatn.findMax()<<endl;
cout<<"float sorting:" << endl;
floatn.sort();
floatn.display();
getch();
return 0;
}
