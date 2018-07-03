//Write a program to find length of string and print second half of the string. 
import java.util.Scanner;

class StringDemo{
    public static void main(String[] args) {
        Scanner s= new Scanner(System.in);
        System.out.println("Enter a string ");
        String str=s.next();
        int len = str.length();
        System.out.println("The length of the string is "+len+" And the substring is \""+str.substring((len/2)+1)+"\"");    
    }
}