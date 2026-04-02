import java.util.*;
public class twoSum
{
  public static void main(String[] args)
  {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the length of array.");
    int n=sc.nextInt();
    int arr[]=new int[n];
    System.out.println("Enter the elements of array: ");
    for(int i=0;i<n;i++)
    arr[i]=sc.nextInt();
    System.out.println("Enter the target value.");
    int target=sc.nextInt();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
          if((arr[i]+arr[j])==target)
          {
          System.out.println("["+i+","+j+"]");
          return;
        }
       }
    }
    System.out.println("No solution found.");
  }
}