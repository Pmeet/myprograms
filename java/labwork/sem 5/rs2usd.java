import java.util.Scanner;
class Rs2usd{
    public static void main(String[] args) {
        float rupees,dollars;
        //1 dollar = 60 rupees therefore 1 rupee = 1/60 dollars
        Scanner s = new Scanner(System.in);
        rupees=nextInt();
        dollars=rupees/60;
        System.out.println("Rupees to dollars are "+rupees);
    }
}