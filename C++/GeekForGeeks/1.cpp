#include<iostream>
using namespace std;
// geek m divisor
int main(){
    int m,n,t,cnt;
    cin>>t;
    while(t--){
        cnt=0;
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            if(n%i==0 && i%2==0){
            cnt++;
            }

        }
        cnt==m
        ?
        cout<<"YES"<<endl
        :
        cout<<"NO"<<endl;
     
    }

    return 0;
}
