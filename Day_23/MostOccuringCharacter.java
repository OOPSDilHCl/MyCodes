import java.util.*;
public class MostOccuringCharacter
{
  public static void main(String[] args)
  {
    Scanner in=new Scanner(System.in);
    System.out.println("Enter the string: ");
    String str=in.nextLine();
    int[] count=new int[256];
    int l=str.length();
    for(int i=0;i<l;i++){
      count[str.charAt(i)]++;
    }
    int max=count[0]; char ch=' ';
    for(int i=0;i<l;i++){
      if(count[str.charAt(i)]>max){
        max=count[str.charAt(i)];
        ch=str.charAt(i);
      }
    }
    System.out.println(ch);
    in.close();
  }
}