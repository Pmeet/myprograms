import java.util.*;

// Logic for app which checks whether the input number is a square number or triangular number or neither or both of them
public class appNumberShapes {
    public static void main(String[] args) {
        class Check{
            int num;
            public boolean isT(){
                int x=1,tnum=1;
                while(tnum<num){
                    x++;
                    tnum=tnum+x;
                    
                }
                if(tnum==num) return true;
                else return false;
            }
            public boolean isS() {
                
                int number=(int)Math.sqrt(num);
                if(number*number==num) return true;
                else return false;
            }
        }
        Check n1 = new Check();
        n1.num = 20;

        if (n1.isT() && n1.isS()) {

            System.out.println("Number is both");
            
        }else if(n1.isT()){
            System.out.println("Number is Triangular");
        }
        else if(n1.isS()){
            System.out.println("Number is Square");
        }
        else{
            System.out.println("Number is neither");
        }
    }
    
}
    
