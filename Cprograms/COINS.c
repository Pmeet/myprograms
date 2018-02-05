#include<stdio.h>
int main(){

    int gc,usd1=0;
    float n1,n2,n3;
    scanf("%d",&gc);
    n1=(int)gc/2;
    n2=(int)gc/3;
    n3=(int)gc/4;
    usd1=n1+n2+n3;
    if(gc>usd1)
        printf("%d\n",gc);
    else
        printf("%d\n",usd1);
    return 0;
    
}