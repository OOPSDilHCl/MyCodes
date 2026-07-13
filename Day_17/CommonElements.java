import java.util.*;
public class CommonElements
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
    for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
        if(arr1[i]==arr2[j]){
          System.out.print(arr1[i]+" ");
        }
      }
    }
    scan.close();
  }
}