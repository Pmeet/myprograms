// Intro to classes and objects

public class classAndObject{
  public static void main(String[] args){
    class Number{
      int n;
      public boolean isPos(){
        if(n>= 0) return true;
        else return false;
      }
    }
    Number n1 = new Number();
    n1.n=-25;
    System.out.println(n1.isPos());
  }
}
