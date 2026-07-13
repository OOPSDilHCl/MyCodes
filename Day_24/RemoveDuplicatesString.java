import java.util.*;
public class RemoveDuplicatesString
{
  public static void main(String[] args)
  {
    Scanner in=new Scanner(System.in);
    System.out.println("Enter the string: ");
    String str=in.nextLine();
    Set<Character> set=new LinkedHashSet<>();
    int l=str.length();
    for(int i=0;i<l;i++){
      set.add(str.charAt(i));
    }
    for(char letter : set)
     System.out.print(letter);
    in.close();
  }
}