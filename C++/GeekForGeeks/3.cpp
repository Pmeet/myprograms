#include <iostream>
using namespace std;
int gcd(int n1, int n2){
    
    while(n1 != n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    return n1;
}
int main()
{
    int a,m, n, t;
    while(t--){
        int cnt=0;
        cin>>n>>m;
        a=gcd(n,m);
        int i=n+1;
        for(i;cnt==3;i++){
            if(a==gcd(i,n)){
                cout<<i<<" ";
                cnt++;
            }
        }

    }
    return 0;
}