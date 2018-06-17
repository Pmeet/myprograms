#include<iostream>
using namespace std;

int greatest(int a[],int N){

    int i,gt;
    gt=0
    for(i=0;i<N;i++){
        if(a[i]>a[gt])
            gt=i;
    }

    return gt;
}    

int main(){

    int t,N,i,j,k,sumA=0,sumB=0;
    cin>>t;
    while(t--){
        cin>>N;
        int a[N],b[N];
        for(i=0;i<N;i++){
            cin>>a[i];
        }
        for(i=0;i<N;i++){
            cin>>b[i];
        }        
        j=greatest(a,N);
        k=greatest(b,N);
        for(i=0;i<N;i++){
            if(i==j)
                a[i]=0;
            sumA+=a[i];

        }
        
        for(i=0;i<N;i++){
            if(i==k)
                b[i]=0;
            sumB+=b[i];

        }
    }   
    return 0;
}