import java.util.*;
public class CommonCharString
{
  public static void main(String[] args)
  {
    Scanner in=new Scanner(System.in);
    System.out.println("Enter the string: ");
    String str1=in.nextLine();
    System.out.println("Enter the string: ");
    String str2=in.nextLine();
    Set<Character> set=new LinkedHashSet<>();
    for(char ch : str1.toCharArray()){
      set.add(ch);
    }
    for(char ch : str2.toCharArray()){
      if(set.contains(ch)){
        System.out.print(ch+"");
        set.remove(ch);
      }
    }
    in.close();
  }
}