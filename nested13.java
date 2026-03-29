/*
1      1 
12    21
123  321
12344321
*/
import java.util.*;
public class nested13{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    for(int i=1;i<=n;i++)
    {
      int j;
      for(j=1;j<=i;j++)
      System.out.print(j);
      for(int k=1;k<=2*(n-i);k++)
      System.out.print(" ");
      for(j--;j>=1;j--)
      System.out.print(j);
      System.out.println();
    }
  }
}
