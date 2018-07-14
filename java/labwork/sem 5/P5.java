//2. Write a program to accept a line and check how many consonants and vowels are there in line.                   3. Write a program to count the number of words that start with capital letters.                                            

import java.util.Scanner;
class P5{
    public static void main(String[] args) {
        int vowel=0;
        int consonant=0;
        int words=0;
        int flag_for_capital_letter=0;
        // Scanner s = new Scanner(System.in);
        // String str = s.next();
        String str = " This is a String class object and file name is StringDemo";
        for(int i=0;i<str.length();i++)
        {      
            Character c= new Character(str.charAt(i));
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'  )
                vowel+=1;
            else if(c!=' '){
                consonant+=1;
            }
            if(Character.isUpperCase(c)){
                if(flag_for_capital_letter==0)
                    words+=1;
                flag_for_capital_letter=1;
            }
            if(c==' ')
                flag_for_capital_letter=0;
        }
        System.out.println("Vowels = "+vowel+"\nConsonants = "+consonant+"\nWords = "+words);
    }
}