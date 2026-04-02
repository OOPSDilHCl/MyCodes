import java.util.*;
public class containerWithMostWater
{
  public static void main(String[] args)
  {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the length of array.");
    int n=sc.nextInt();
    int arr[]=new int[n];
    System.out.println("Enter the height of vertical lines: ");
    for(int i=0;i<n;i++)
    arr[i]=sc.nextInt();
    int maxVolume=0;
    for(int i=0;i<n;i++)
    {
      for(int j=i+1;j<n;j++)
      {
      int c=arr[i]<arr[j]?arr[i]:arr[j];
       if(maxVolume<(c*(j-i))) 
        maxVolume=c*(j-i);
      }
    }
    System.out.println(maxVolume);
  }
}