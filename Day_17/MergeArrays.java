import java.util.*;
public class MergeArrays
{
  public static void main(String[] args)
  {
    Scanner scan=new Scanner(System.in);
    System.out.println("Enter number of elements in first array: ");
    int n=scan.nextInt();
    System.out.println("Enter elements of the array: ");
    int[] arr1=new int[n];
    for(int i=0;i<n;i++)
      arr1[i]=scan.nextInt();
    System.out.println("Enter number of elements in second array: ");
    int m=scan.nextInt();
    System.out.println("Enter elements of the array: ");
    int[] arr2=new int[m];
    for(int i=0;i<m;i++)
      arr2[i]=scan.nextInt();
    int[] merge=new int[m+n];
    int i=0;
    for(int num : arr1)
    {
      merge[i]=num;
      i++;
    }
    for(int num : arr2)
    {
      merge[i]=num;
      i++;
    }
    System.out.println(Arrays.toString(merge));
    scan.close();
  }
}