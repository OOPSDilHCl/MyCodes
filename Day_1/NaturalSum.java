import java.util.*;
public class NaturalSum
{
  public static void main(String[] args)
  {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter a natural number: ");
    int N=sc.nextInt();
    /*Previous approach 
    int i=1,sum=0;
    while(i<=N)
    {
      sum=sum+i;
      i++;
    }*/
    int sum=N*(N+1)/2;
    System.out.println("Sum of first N natural no. = "+sum);
  }
}