// program to copy files by giving file name as command line arguments
#include<iostream>
#include<fstream>

using namespace std;

int main(int argc,char **args){

	fstream fread,fwrite;
	fread.open(args[1],ios::in);
	fwrite.open(args[2],ios::out);
	char c;
	while(!fread.eof()){
		fread.get(c);
		fwrite.put(c);
	}
	fread.close();
	fwrite.close();
}

// To run this file using command line arguments in CMD in windows run the following command
//g++ cla_1.cpp -o cla_1
//.\cla_1 file_name_1 file_name_2
 