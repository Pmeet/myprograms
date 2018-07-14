#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
int main(){

    fstream file1;
    file1.open("file1.txt",ios::in);
    cout<<"Enter the word you want to replace: ";
    string word;
    cin>>word;
    cout<<"Enter the word to print instead: ";
    string replace;
    cin>>replace;
    string line;
    while(!file1.eof()){
        getline(file1,line);
        if(strstr(line,word)){
            str.replace(str.find(word),strlen(word),replace);
        }
    }
}