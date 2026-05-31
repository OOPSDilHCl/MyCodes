import java.util.*;
public class Reverse
{
  public static void main(String[] args)
  {
    Scanner scan=new Scanner(System.in);
 System.out.println("Enter a number: ");
    int rev=0,n=scan.nextInt();
    while(n>0)
    {
      rev=rev*10+n%10;
      n/=10;
    }
    System.out.println("Reverse of the number = "+rev);
  }
}