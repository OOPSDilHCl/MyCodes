import java.util.*;
public class subArray{
  public static void main(String[] args){
    Scanner scan = new Scanner(System.in);
    System.out.println("Enter the length of array and the elements.");
    int n=scan.nextInt();
    if(n==0){ System.out.println(0);
    return;}
    int[] a=new int[n];
    for(int i=0;i<n;i++)
    {
      a[i]=scan.nextInt();
    }
    int currentSum=a[0];
    int maxSum=a[0];
    for(int i=1;i<n;i++)
    {
      currentSum=Math.max(a[i],a[i]+currentSum);
      maxSum=Math.max(maxSum,currentSum);
    }
    System.out.println(maxSum);
  }
}