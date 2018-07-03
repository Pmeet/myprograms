#include<iostream>
using namespace std;
inline float power(float x,int y){
	float power=1;
	for(int i=1;i<=y;i++){
		power=power*x;
	}
	return power;
}
inline float npower(float x,float y){
	float npower=1;
	if(y==-1)return npower=1/x;
	return	npower=1/(power(x,-y));
}
int main(){
	int y;
	float x;
	cout<<"Enter number and its exponent: "<<endl;
	cin>>x>>y;
	if(y>=0)
	cout<<"Result is "<<power(x,y)<<endl;
	else if(y<0)
	cout<<"Result is "<<npower(x,y)<<endl;
	return 0;
}
