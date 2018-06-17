/*Declare a class called logic_gate to represent logic gates.
The class has three data members - input1, input2 and input3
to represent three inputs to the logic gate.
The class also has a virtual function member called get_gate_output.
Derive two classes from the base class logic_gate, namely, and_gate
and or_gate to represent ‘logical and gate’ and ‘logical or gate’
respectively. Define function get_gate_output in both of these
classes to get the output of the gate.
Show use of above classes and functions to demonstrate
dynamic polymorphism in function main.*/
#include<iostream>
#include<conio.h>
using namespace std;
class logic_gate
{
 public:
int i1,i2,i3;
void input()
{
cout << "\nInput three binary values: ";
cin >> i1 >> i2 >> i3;
}
virtual void get_gate_output() = 0; // pure virtual
};
class and_gate : public logic_gate
{
 public:
void get_gate_output()
{
int o1;
o1 = i1 & i2 & i3;
cout << "\nResult of AND gate : " << o1;
}
};
class or_gate : public logic_gate
{
 public:
void get_gate_output()
{
int o2;
o2 = i1 | i2 | i3;
cout << "\nResult of OR gate : " << o2;
}
};
int main()
{
logic_gate *lptr;
and_gate ag;
or_gate og;
lptr = &ag;
lptr -> input();
lptr -> get_gate_output();
lptr = &og;
lptr -> input();
lptr -> get_gate_output();
getch();
return 0;
}

