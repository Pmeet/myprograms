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

// Program 2 End
// Program 6
class DB;

class DM{
  float meter,ans;
  float cm;
public:
  friend DM add(DM m1,DB f1);
  void get_data();
  void print_data();
};

class DB{
  float f;
  float in;
public:
  friend DM add(DM m1,DB f1);
  void get_Data();
};

void DM::get_data(){
  cout<<"\nEnter values of DM object"<<end;
  cout<<"\nm=";cin>>m;
  cout<<"\ncm=";cin>>cm;
}
void DM::print_data(){
  cout<<"\nThe result of addition is "<<result1;
}
void DB::get_Data(){
  cout<<"\nEnter values of DB object"<<end;
  cout<<"\nf=";cin>>f;
  cout<<"\ninch=";cin>>in;
}
DM add(DM m1,DB f1){
  DM result;
  result.ans=m1.m+f1.f*(0.3048);
  result.ans=m1.cm+f1.in*(2.54);
  return result;
}


// Program 6 end


// Program 7
class m1{

};
class m2{

};
// Program 7 End


int main(){

  int a,i;
  cout<<"\n1. Class Employee\n2.Class Student\n6.Class DM and DB\nSelect the program number : ";
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
      break;
  case 6:
      DM m1,result;
      DB f1;
      m1.get_data();
      f1.get_Data();
      result=add(m1,f1);
      result.print_data();
  };

}
//End of Assignment
