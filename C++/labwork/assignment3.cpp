//Meet Parekh
//160470116031
//Assignment-3
#include<iostream>
using namespace std;
// PROGRAM 1
class Employee{
  int age ;
  int dep;
  char name[20];

public:

  void get_record(void);
  void put_record(void);

};

void Employee::get_record(void){

  cout<<"Enter Name : "<<endl;
  cin>>name;
  cout<<"\nEnter Age : "<<endl;
  cin>>age;
  cout<<"\nEnter department : "<<endl;
  cin>>dep;

}

void Employee::put_record(void){

  cout<<"\nName is : "<<name;
  cout<<"\nAge is : "<<age;
  cout<<"\nDepartment is : "<<dep;

}
//PROGRAM 2
class Student {
    int sub[3];
    char sname[50];
    int percentage;
    int dept;

  public:

    void getData(void);
    void putData(void);
    void calAvg(void);

};

void Student::getData(){
    int sum=0;
    cout<<"\nEnter Student name: ";
    cin>>sname;
    cout<<"\nEnter student department: ";
    cin>>dept;
    cout<<"\nEnter marks of 3 subjects: ";
    for(int i=0;i<3;i++){
      cout<<"Subject "<<i+1;
      cin>>sub[i];
      sum+=sub[i];
    }
}
void Student::putData(){
    cout<<"\nStudent name is: "<<sname;
    cout<<"\nDepartment: "<<dept;
    cout<<"\nMarks of subjects are : ";
    for(int i=0; i<3;i++){

    }

}
int main(){

  int a,i;
  cout<<"\n1. Class Employee\n2.Class Student\nSelect the program number : ";
  cin>>a;
  switch(a){
    case 1:
      Employee employee[5];
      for(i=0;i<5;i++){
        cout<<"\nEnter details for employee "<<i+1<<endl;
        employee[i].get_record();
      }
      for(i=0;i<5;i++){
        cout<<"Detail of employee "<<i+1<<endl;
        employee[i].put_record();
      }
      break;
  case 2:


  };

}
//End of Assignment
