import java.util.*;
public class GCD2
{
  public static void main(String[] args)
  {
    Scanner scan=new Scanner(System.in);
    System.out.println("Enter the two numbers: ");
    int n=scan.nextInt();
    int m=scan.nextInt();
    while(m!=n)
    {
      if(m>n) m-=n;
      else if(m<n) n-=m;
    }
    System.out.println("Greatest common factor = "+m);
  }
}