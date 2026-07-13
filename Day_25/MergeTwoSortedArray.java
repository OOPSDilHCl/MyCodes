import java.util.*;
public class MergeTwoSortedArray
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
    int i=0,j=0,k=0;
    while(j<n && k<m){
      if(arr1[j]<=arr2[k]){ 
      merge[i++]=arr1[j++];
      }
      else{
      merge[i++]=arr2[k++];
      }
    }
    while(j<n) merge[i++]=arr1[j++];
    while(k<m) merge[i++]=arr2[k++];
    System.out.println(Arrays.toString(merge));
    scan.close();
  }
}