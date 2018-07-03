//Write a program that calculate percentage marks of the student if marks of 6 subjects are given. 
import java.util.Scanner;
class Stu{
    float ave,percent;
    int sub[]=new int[6],sum=0;
    void percent(){
        for(int i = 0; i<6 ; i++){
            sum+=sub[i];
        }
        ave=sum/6;
        percent=ave/6;
    }
}
class P2{
    public static void main(String[] args) {
    Scanner scan = new Scanner(System.in);
    Stu s = new Stu();
    System.out.println("Enter marks of all six subjects ");
    for(int i=0; i < 6; i++){
        scan.sub[i]=nextInt();
    }
    s.percent();
    System.out.println("The percentage is "+s.percent+"%");
        
    }
}