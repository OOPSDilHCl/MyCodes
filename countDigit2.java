import java.util.*;
public class countDigit2
{
  public static void main(String[] args)
  {
    Scanner input=new Scanner(System.in);
   System.out.println("Enter a number:");
    int n=input.nextInt();
    //digits=Math.log10(n)+1.
   System.out.println((int)(Math.log10(n)+1));
  }
}