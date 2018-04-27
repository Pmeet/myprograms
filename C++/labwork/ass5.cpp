#include<iostream>
using namespace std;

// Program 1
class B
{
    int a;
public:
    int b;
    void get_ab(){
        cout << "Enter values of a and b: ";
        cin >> a >> b;
    }
    int get_a(){
        return a;
    }
    void show_a(){
        cout << "a = " << a << "\n";
    }
};

class D : private B 
{
    int c;
public:
    void mul(void){
        get_ab();
        c = b * get_a(); 
    }

    void display(void){
        show_a(); 
        cout << "b=" << b << "\n" << "c=" << c << "\n\n";
    }

};
// End of program 1

//Program 2

class item{
    int item_code;
    char item_name[20];
public:
    int cost;

    void init_item(){
        cout<<"Enter item name: "<<endl;
        cin>>item_name;

        cout << "Enter item code: "<<endl;
        cin>>item_code;

        cout << "Enter item cost: "<<endl;
        cin>>cost;
    
    
    }
    void item_display(){
        cout<<"Item name"<<item_name<<endl;
        cout<<"Item code"<<item_code<<endl;
    }
};



class employee : public item{

    int emp_code,amount=0,emp_discount;
    char emp_name[20];
public:
    void init_emp(){

        cout << "Enter employee name: "<<endl;
        cin >> emp_name;

        cout << "Enter employee code: "<<endl;
        cin >> emp_code;

        cout << "Enter employee discount: "<<endl;
        cin >> emp_dis;
    }

    void eamount(){
        amount= cost-discount;
        cout<<amount;
    }

    void emp_display(){
        cout<<"Employee name is "<<emp_name<<endl;
        cout<<"Employee code is "<<emp_code<<endl;
        if(amount==0)
            cout<<"Please calculate value of amount from amount"<<endl;
        else
            cout<<"amount to be paid by employee is: "<<eamount()<<endl;
    }
};

class customer : public item
{

    int c_code, amount = 0, c_discount;
    char c_name[20];

  public:
    void init_customer()
    {

        cout << "Enter customer name: " << endl;
        cin >> c_name;

        cout << "Enter customer code: " << endl;
        cin >> c_code;

        cout << "Enter customer discount: " << endl;
        cin >> c_dis;
    }

    void camount()
    {
        amount = cost - discount;
        cout<<amount;
    }

    void c_display()
    {
        cout << "customer name is " << c_name << endl;
        cout << "customer code is " << c_code << endl;
        if (amount == 0)
            cout << "Please calculate value of amount from amount" << endl;
        else
            cout << "amount to be paid by customer is: " <<camount() << endl;
    }
};

// End of Program 2

// Program 3

// End of Program 3

// Program 4
class Circle{
protected:
    float radius;
    float area;
    float get_radius(){
        cout<<"Enter Radius "<<endl;
        cin>>radius;
        return radius;
    }

    void calculate_area(){
        area=3.14*r*r;
    }
};

class Cylinder : protected Circle {
    float volume,cradius,cheight;
public:
    void get_parameters(){
        cout<<"Enter height of cylinder "<<endl;
        cin>>cheight;
    }
    void calculate_volume(){
        volume=3.14*get_radius()*get_radius()*cheight;
        cout<<"Volume of cylinder is "<<volume<<endl;
    }
    

};
// End Program 4









//---------------------------------------------------------------------------------------------------------------
int main(){

    int i;
    cout<<"Enter the program number you want to run: "<<endl;
    cout << "1. Program 1 " << endl;
    cout << "2. Program 2 " << endl;
    cin>>i;
    switch(i){
        case 1:
        {
            D d;
            d.mul();
            d.display();
            d.mul();
            d.display();
            break;               
        }
        case 2:
        {
            item i1;
            employee e1;
            customer c1;
            i1.init_item();
            i1.item_display();
            e1.init_emp();
            c1.init_customer();
            e1.emp_display();
            c1.c_display();
            break;
        }
        case 3:
        {
            system("cls");
            cylinder c1;
            system("cls");
            c1.showdata();
            break;
        }
        default: cout<<"Please enter a valid program number";
    };
    
    return 0;
}