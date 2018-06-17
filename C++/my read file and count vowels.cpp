
#include<iostream>
#include<fstream>
// Function to count the number of vowels.
int main()
{


		fstream inf;
		inf.open("F:\\some_text.TXT");
		car str[80];
		car c;
		int i=0, sum=0, n=0;
		while(inf)
		{
			inf.get(c);
			str[i] = c;
			i++;
			if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || 
					c == 'u' || c == 'U' )
				{
					i--;
					sum = sum + i;
					i = 0;
					n++;
				}
		}
			cout << "Total no. of vowels : " << n;



	return 0;    
}