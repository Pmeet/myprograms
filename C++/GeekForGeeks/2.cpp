#include<iostream>
using namespace std;
//m-th power
int main(){
    int m,n,t,i,cnt;
    cin>>t;
    while(t--){
        bool np=false;
        cnt=0;
        cin>>n>>m;
        int N=n-m;
        if(N<0){
            cout<<"NO"<<endl;
            continue;
        }
        for(i=2;i<N;i++){
            if(N%i==0){
                np=true;
                break;
            }
           
        }
        if(np){
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}