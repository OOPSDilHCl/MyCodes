import java.util.*;//Non repeating
public class FirstCharacter2
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
    for(int i=0;i<l;i++){
      if(count[str.charAt(i)]==1){
        System.out.println(str.charAt(i));
        in.close();
        return;
      }
    }
    in.close();
  }
}