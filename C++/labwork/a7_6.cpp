#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
 // Open two files to be merged
 FILE *fp1 = fopen("1.txt", "r");
 FILE *fp2 = fopen("2.txt", "r");
 // Open file to store the result
 FILE *fp3 = fopen("3.txt", "w");
 char c;
 if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
 {
 puts("Could not open files");
 exit(0);
 }
 // Copy contents of first file to 3.txt
 while ((c = fgetc(fp1)) != EOF)
 fputc(c, fp3);
 // Copy contents of second file to 3.txt
 while ((c = fgetc(fp2)) != EOF)
 fputc(c, fp3);
 printf("Merged 1.txt and 2.txt into 3.txt");
 fclose(fp1);
 fclose(fp2);
 fclose(fp3);
 return 0;
}
