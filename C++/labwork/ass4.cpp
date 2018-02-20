// All Assignment 4 programs will be here
//Meet Parekh
//160470116031
#include<iostream>

#include<cstring>
using namespace std;
//Program 1

class bird{
    int weight;
    char name[20];
public:
    bird(){
        weight=0;
    }
    bird(int w,char n[]){
        weight=w;
        strcpy(name,n);
    }
    void p1display(){
        cout<<"\nName is "<<name<<" and weight is "<<weight;
    }
    void operator>=(bird b){
        (weight>=b.weight ? cout<<"\nTrue" : cout<<"\nFalse");
    }
};

//End of class and function of Program 1



//Program 2
class complex{
    float real,img;
    public:
    complex(){
        real=0;
        img=0;
    }
    complex(float r, float i){
        real= r;
        img= i;
    } 
    complex operator + (complex c2){
        complex c;
        c.real = real + c2.real;
        c.img  = img + c2.img; 
    return c;
    }
    void display(){
        cout<<real<<"+ j"<<img;
    }
};
//End of Program 2


int main(){

    int i;
    cout<<"Below is given the program list,enter the number to access the program"<<endl;

    cout<<"\n 1. Program 1\n 2. Program 2"<<endl;
    cin>>(i);

    switch(i){
        case 1:
        {   

            char n1[]="Bird1";
            char n2[]="Bird2";
        // main function of Program 2
            bird b1(10,n1);
            bird b2(20,n2);
            b1>=b2;
        // end of main function of Program 2   
        }
        break;
        case 2:
     // main function of Program 2
        {
            complex c1;
            complex c2(1.1,2.2);
            complex c3(3.3,4.4);
            c1=c2+c3;
            c1.display();
        }
        //End of main function of Program 2
        break;
    };

}
