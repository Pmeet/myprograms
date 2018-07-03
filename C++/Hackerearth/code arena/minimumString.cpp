
#include <iostream>
#include<cstring>
using namespace std;

void returnDistinct(char *str)
{
   
    // Create an array of size 256 and count of
    // every character in it
    int count[150];
    int len=0;
    /* Count array with frequency of characters */
    int i;
    for (i = 0; *(str+i); i++)
        if(*(str+i)!=' ')
            count[*(str+i)]++;
    int n = i;
 
    // Print characters having count more than 0
    for (i = 0; i < n; i++)
        if (count[*(str+i)] == 1)
            len+=i;
    cout<<len<<endl;
}

int main() {
	int num;
	cin >> num;			
    char str[num][15];
	char str2[150]="";
	int cnt=0;
    for(int i=0;i<num;i++){
        cin>>str[i];
    }
    for(int i= 0 ; i<num ; i++){
        strcat(str2,str[i]);
    }
    returnDistinct(str2);

}


