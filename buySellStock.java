import java.util.*;
public class buySellStock
{
  public static void main(String[] args)
  {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the length of array.");
    int n=sc.nextInt();
    int arr[]=new int[n];
    System.out.println("Enter the stock price each day: ");
    for(int i=0;i<n;i++)
    arr[i]=sc.nextInt();
    int maxm=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
          if(arr[j]-arr[i]>maxm)
          {
          maxm=arr[j]-arr[i];
        }
       }
    }
    System.out.println(maxm);
  }
}