#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
string header[]={"stdio.h","conio.h","malloc.h","process.h","string.h","ctype.h"};
string key[]={"int","float","char","double","bool","void","extern","unsigned","goto","static","class","struct","for","if","else","return","register","long","while","do","include","define","main"};
char spchar[]={' ','\t','\n',',',';','(',')','{','}','[',']','#','!','<','>'};
char oper[]={'+','-','*','/','%','='};
fstream file1;



void check(char token[]){

    for(int j=0;j<6;j++){
        if(header[j]==token){
            cout<<"\nHeader : "<<header[j];
            break;
        }
    }

    for(int k=0;k<23;k++){
        if(key[k]==token){
            cout<<"\nKey : "<<key[k];
            break;
        }
    }
}

void analyseIt(){
    char token[50];
    char c; 
    int j=0;
    while(!file1.eof()){
        file1.get(c);
        if(c==' '){
            check(token);
            j=0;
        }
        else{
            token[j++]=c;
        }
        // else if(isalphanum(c)){
        //     token[j]=c;
        //     j++;
        // }
        // else if(is_operator(c)){
        //     cout<<c;
        //     j++;
        // }
        // else if(is_special_char(c)){
        //     cout<<c;
        //     j++;
        // }
    }
}

int main(){

    file1.open("LexicalAnalyzerDemo.cpp",ios::in);
    if(file1==NULL){
        cout<<"\nCould not open file";
        return 0;
    }
    
    else
    {
        cout<<"\nFile opened successfully\n";
        analyseIt();
    }
    cout<<"\nAnalysis completed!!!\n";
}


