//4. Write a program to find that given number or string is palindrome or not.


import java.util.Scanner;

class P6{
	public static void main(String[] args) {
		Scanner s=new Scanner(System.in);
		String str = s.next();
		boolean flag=true;
		int len=str.length();
		for (int i=0 ; i<len/2 ; i++ ) {
			if(str.charAt(i)!=str.charAt(len-i-1)){
				flag = false;
			}
		}
		if(flag)
			System.out.println("String is palindrom");
		else
			System.out.println("String is not a palindrom");

	}
}