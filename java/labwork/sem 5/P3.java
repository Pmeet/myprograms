import java.util.Scanner;
class Calculator{
    int addition(int a, int b){
        return a+b;
    }
    int subtraction(int a,int b){
        return a-b;
    }
    float division(float a,float b){
        if(b==0){
            return -1;
        }
        return a/b;
    }
    float multiplication(int a,int b){
        return a*b;
    }
}

class P3{
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        Calculator c1 = new Calculator();
        System.out.println("Enter two numbers");
        int a=s.nextInt();
        int b=s.nextInt();
        System.out.println("Enter choice of operation you want to perform ");
        System.out.println("1. Addition");
        System.out.println("2. Subtraction");
        System.out.println("3. Multiplication");
        System.out.println("4. Division");
        int i=s.nextInt();
        switch (i) {
            case 1:
                System.out.println("Additionis"+c1.addition(a,b));     
                break;
            case 2:
                System.out.println("Subtraction is"+c1.subtraction(a,b));                    
                break;
            case 3:
                System.out.println("Multiplication is"+c1.multiplication(a,b));                    
                break;
            case 4:
                if(c1.division(a,b)==-1)
                {
                    System.out.println("please enter valid numbers; the second number should not be zero");
                    break;
                }
                System.out.println("Division is"+c1.division(a,b));                    
                break;
        
            default:
                break;
        }
    
    }
}