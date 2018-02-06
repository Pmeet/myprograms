//learning wat is an array and maps and lists is
import java.util.*;

public class arr{
  public static void main(String[] args){
  int[] pn={1,2,3,4,5};
  System.out.println(pn);

//LISTS
  List list=new ArrayList();
  list.add(2);
  list.add(3);
  list.add(5);
  list.remove(1);
  System.out.println(list.get(1));

  System.out.println("Whole list is "+ list.toString());

//MAPS
  Map map = new HashMap();
  map.put("Student","Meet");
  map.put("Gamer","Xtro");

  System.out.println(map.toString());
  System.out.println(map.get("Gamer"));

  map.remove("Gamer");
  System.out.println(map.toString());
  
  }
}
