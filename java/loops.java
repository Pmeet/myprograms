import java.util.*;

public class loops{
  public static void main(String[] args){
    /*
    //While loop
    int i=1;
    while (i<=10) {
      if (i%2==0) {

        System.out.println(i);
      }
      i++;
    }
    */
    /*
    //for loop
    int ans=0;
    for(int j=1;j<=10;j++){
      ans=ans+j;
      System.out.println(ans);
    }
    */
    /*
    //array traversal using loop
    String[] names={"a","b","c"};
    for (String name:names ) {
      System.out.println(name);
    }
    */

    //List traversal using loop

    List<String> fmembers= new ArrayList<String>();
    fmembers.add("A");
    fmembers.add("B");
    fmembers.add("C");
    for (String name: fmembers ) {
      System.out.println(name);
    }
  }
}
