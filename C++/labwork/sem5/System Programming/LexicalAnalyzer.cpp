#include<iostream>
// #include<cstring>
#include<fstream>
#define MAX 20

using namespace std;

string header[]={"iostream","cstring"/*,"stdio.h","conio.h","malloc.h","process.h","string.h","ctype.h"*/};
//char key[][20]={"int","float","char","double","bool","void","extern","unsigned","goto","static","class","struct","for","if","else","return","register","long","while","do","include","define","main"};
string key[]={"int","main","hello","include"};
char spchar[]={',',';','(',')','{','}','[',']','#','!','<','>'};
char oper[]={'+','-','*','/','%','='};
fstream file1;

void check(char token[]){
    
    for(int j=0;j<2;j++){
        if(header[j]==token){
            
            cout<<"\nHeader : "<<header[j]<<endl;
            
        }
    }
    for(int k=0;k<4;k++){
        if(key[k]==token){
            
            cout<<"\nKey : "<<key[k]<<endl;
            
        }
    }
}

bool isSC(char c){

    // cout<<"Checking for special char"<<endl;
    int i = 0;
    while(i<13)
    {
    
        if(spchar[i]==c)
            return true;
        i++;
    
    }
    return false;

}

bool isOP(char c){

    // cout<<"Checking for operator"<<endl;

    int i = 0;
    do
    {
    
        if(c==oper[i])
            return true;
        i++;
    
    } while (oper[i] != '=');
    return false;

}

void analyseIt(){
    // Stack s;
    int flag_for_char=0;
    char token[MAX]={'\0'};
    char c;
    int j=0;
    do{

        file1.get(c);
        if((c==' ' || c=='\n') || (isSC(c)) && flag_for_char!=0){
    
            check(token);
            for (int i = 0; i < j; ++i)
            {
             token[i]={'\0'};
            }
            j=0;
            flag_for_char=0;
            if(isSC(c) && flag_for_char==0){

              cout<<c<<endl;

            }
    
        }
        else if(isSC(c) && flag_for_char==0){

            cout<<c<<endl;

        }
        else if(isOP(c)){

            cout<<c<<endl;

        }
        else if(isalpha(c)){

            token[j++]=c;
            flag_for_char=1;
        }
        else{
            cout<<c<<endl;

        }
    }while(!file1.eof());
}

int main(){

    file1.open("LexicalAnalyzerDemo.cpp");
    if(!file1){
    
        cout<<"\nCould not open file\n";
        return 0;
    
    }

    else
    {
    
        cout<<"\nFile opened successfully\n";
        analyseIt();
    
    }

    cout<<"\nAnalysis completed!!!\n\n";

}


