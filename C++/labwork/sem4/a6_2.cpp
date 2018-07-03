/*Create class ITEM with item_code, item_rate and
quantity as data members.
Create an array of pointers to objects of class ITEM.
Write a member function which will calculate the
amount of item.
Print item_code and amount of item.*/
#include<iostream>
#include<conio.h>
using namespace std;
class item {
int code;
float rate;
int quantity;
 public:
void getdata(int c, float r, int q) {
code = c; rate = r; quantity = q;
}
void calculate() {
rate = quantity * rate;
}
void show() {
cout << "\nCode : " << code << "\n";
cout << "Price: " << rate << "\n";
}
};
const int size = 2;
int main() {
item *p = new item[size];
item *d = p;
int x,z,i;
float y;
//system("cls");
for(i=0; i<size; i++) {
cout << "\nInput code for item " << i+1 << ": ";
cin >> x;
cout << "\nInput price for item " << i+1 << ": ";
cin >> y;
cout << "\nInput quantity for item " << i+1 << ": ";
cin >> z;
p -> getdata(x,y,z);
p++;
}
for(i=0; i<size; i++)
{
cout << "\nTotal price for item " << i+1 << ": ";
d -> calculate();
d -> show();
d++;
}
//getch();
return 0;
}
