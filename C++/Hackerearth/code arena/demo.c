#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
FILE *fp;
char spchar[12]={' ','\t','\n',',',';','(',')','{','}','[',']','#'};
char oper[9]={'+','-','*','/','%','=','!','<','>'};
char key[24][12]={"int","float","char","double","bool","void","extern","unsigned","goto","static","class","struct","for","if","else","return","register","long","while","do","include","define","main"};
char header[6][15]={"stdio.h","conio.h","malloc.h","process.h","string.h","ctype.h"};
void skipcomment();
void analyze();
void check(char[]);
int spchars(char);
int isop(char);
int fop=0,numflag=0,f=0;
char c,ch,sop;


void main()
{
char fname[12];
clrscr();
printf("\nEnter filename : ");
scanf("%s",fname);
fp=fopen(fname,"r");
if(fp==NULL)
{
printf("\nThe file doesn't exist.");
}
else
{
analyze();
}
printf("\n\nLEXICAL ANALYSIS COMPLETED ");
getch();
}



void analyze()
{
char token[50];
int j=0;
while(!feof(fp))
{
c=getc(fp);
if(c=='/') //checking for comments in the file
{
skipcomment();
}
else if(isalpha(c))
{
if(numflag==1)
{
token[j]='\0';
check(token);
numflag=0;
j=0;
f=0;
}
else
{
token[j]=c; j++;
}
if(f==0)
f=1;
}
else if(isalnum(c))
{
if(numflag==0)
numflag=1;
token[j]=c; //combining the characters to get the token
j++;
}
else
{
if(spchars(c)) //Checking for delimiters.
{
if(numflag==1)
{
token[j]='\0';
check(token);
numflag=0;
}
if(f==1)
{
token[j]='\0';
numflag=0;
check(token);
}
j=0;
f=0;
printf("\nSpCharacter\t %c",c);
}
else if(isop(c))
{
if(numflag==1)
{
token[j]='\0';
check(token);
numflag=0;
j=0;
f=0;
}
if(f==1)
{
token[j]='\0';
j=0;
f=0;
numflag=0;
check(token);
}
if(fop==1)
{
fop=0;
printf("\nOperator\t %c%c",c,sop);
}
else
printf("\nOperator\t %c",c);
}
else if(c=='.')
{
token[j]=c;
j++;
}
}
}
}


int spchars(char c)
{
int i;
for(i=0;i<14;i++)
{
if(c==spchar[i])
return 1;
}
return 0;
}


int isop(char c)
{
int i,j;
char ch;
for(i=0;i<7;i++)
{
if(c==oper[i])
{
ch=getc(fp);
for(j=0;j<6;j++)//++' or '--'
{
if(ch==oper[j])
{
fop=1;
sop=ch;
return 1;
}
}
ungetc(ch,fp);
return 1;
}
}
return 0;
}


void check(char t[])
{
int i;
if(numflag==1)
{
printf("\nConstant \t %s",t);
return;
}
for(i=0;i<6;i++)
{
if(strcmp(t,header[i])==0)
{
printf("\nHeader file\t %s",t);
return;
}
}
for(i=0;i<21;i++)
{
if(strcmp(key[i],t)==0)
{
printf("\nKeyword\t\t %s",key[i]);
return;
}
}
printf("\nIdentifier\t %s",t);
}



void skipcomment()
{
ch=getc(fp);
if(ch=='/')
{
while((ch=getc(fp))!='\n');
}
else if(ch=='*')
{
while(f==0)
{
ch=getc(fp);
if(ch=='*')
{
c=getc(fp);
if(c=='/')
f=1;
}
}
f=0;
}
}
