#include<iostream>
using namespace std;
int eladd(int x[],int i){
	sum=0;
	if(i==0) return x[0];
	return sum+=eladd(x[i],i--); 	
}

int main()
{
	int sum,x[100],n;
	cout<<"enter n:";
	cin>>n;
	for(i=0;i<n;i++)
		cin>>x[i];
	sum=eladd(x[],n-1);
	cout<<"Sum="<<sum;

	return 0;
}

