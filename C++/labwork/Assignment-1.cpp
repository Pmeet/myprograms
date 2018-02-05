
// This is a program containing all the programs from assignement 1
// from 1-8 of assignment all are solved in this.
//Meet Parekh - 160470116031 - OOPC ASSIGNMENT 1 
#include<iostream>
#include<cstring>
using namespace std;

int printHelloWorld();
int Calculator();
int power();
int sum();
int prime();
int palindrome();
int fibonacci();
int sort();

int main(){
	char ch;
	int i;
	again:
	cout<<"Select Assignment No.: \n\n1. Hellow World\n2.Calculator\n3.Power\n4.Sum\n5.Prime\n6.Palindrome\n7.Fibonacci Series\n8.Sort\n\n ";
	cin>>i;
	switch(i){

		case 1: printHelloWorld();break;
		case 2: Calculator();break;
		case 3: power();break;
		case 4: sum();break;
		case 5: prime();break;
		case 6: palindrome();break;
		case 7: fibonacci();break;
		case 8: sort();break;
		default: "Enter valid choice value!!\n\nWant to try again?(y/n): ";
			cin>>ch;
			if(ch=='y' || ch=='Y') goto again;
			else return 0;
	}
}

int printHelloWorld(){
	cout<<"\n\n\nHello World!\n\n\n";
}

int Calculator(){

	int i,a,b;char c;
	redo:
	cout<<"\n\nEnter two numbers: ";cin>>a>>b;
	cout<<"\n\nEnter choice: ";
	cout<<"\n1.add\n2.subtract\n3.multiply\n4.division\n5.Exit"<<endl;cin>>i;
	switch(i){
		case 1: cout<<"\nAns= "<<a+b<<endl;
			break;
		case 2: cout<<"\nAns= "<<a-b<<endl;
			break;
		case 3: cout<<"\nAns= "<<a*b<<endl;
			break;
		case 4: if(b==0) cout<<"\nInvalid INPUT!";
			else cout<<"\nAns= "<<a/b<<endl;
			break;
		case 5:	return 0;
		default: cout<<"\nInvalid INPUT!\nWant to try again?(y/n)";cin>>c;
			if(c=='y'||c=='Y') goto redo;
	}
}

int POWER(int x,int y){

	int ans=1;
	while(y--){
	ans=ans*x;
	}
	cout<<"\nAns = "<<ans<<endl;
}

int power(){

	int x,y;
	cout<<"\nEnter base value: "<<endl;cin>>x;
	cout<<"\nEnter power value: "<<endl;cin>>y;
	POWER(x,y);
}


int SUM(int a[],int n){
	int i,soae=0;
	for(i=0;i<n;i++){
		soae+=a[i];
	}
	cout<<"\n\nSum of all elements = "<<soae<<endl;
}

int sum(){
	int a[100],n;
	cout<<"\n\nEnter size of array: "<<endl;cin>>n;
	for(int i=0;i<n;i++)cin>>a[i];
	SUM(a,n);
}

int prime(){
	int i,a;
	cout<<"\n\nEnter number: "<<endl;
	cin>>a;
	for(i=2;i<a/2;i++){
	if(a%i==0){cout<<"Number is not Prime"<<endl; return 0;}
	}
	cout<<"Number is prime";
}

int palindrome(){

	char str[50];
	int i,j,l;
	cout<<"\nEnter a string: "<<endl;
	cin>>str;
	l=strlen(str);
	for(i=0;i<l;i++){
		if(str[i]!=str[l-i-1]){
			cout<<"\nNot Palindrome\n";
			return 0;
		}
	}
	cout<<"\n\nPalindrome"<<endl;
}

int fibonacci(){

	int a,b,c,n,i;
	cout<<"Enter number: "<<endl;
	cin>>n;
	a=0,b=1;
	for(i=0;i<n;i++){
		cout<<" "<<a;
		c=a+b;
		a=b;
		b=c;
	}
	cout<<endl;
}


int SORT(int a[]){
	int i,j,temp;
	for(i=0;i<5;i++){
		for(j=i;j<5;j++){
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++)cout<<" "<<a[i];
	cout<<" "<<endl;
}

int sort(){
	int a[5];
	cout<<"Enter array elements: "<<endl;
	for(int i=0;i<5;i++)cin>>a[i];
	SORT(a);
}
