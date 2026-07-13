import java.util.*;
public class BinarySearch{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter the number of elements: ");
    int n=sc.nextInt();
    int arr[]=new int[n];
    System.out.println("Enter the elements: ");
    for(int i=0;i<n;i++)
     arr[i]=sc.nextInt();
    System.out.println("Enter the target: ");
    int key=sc.nextInt();
    boolean found=false;
   int start=0,end=n-1;
    while(start<=end){
      int mid=start+(end-start)/2;
      if(arr[mid]==key){
        System.out.println("Element found at index: "+mid);
        found=true;
        break;
      }else if(arr[mid]<key) start=mid+1;
      else end=mid-1;
    }
    if(!found) System.out.println("Element not in list!");
  }
}