import java.util.*;
public class BinarySearch{
  public static void main(String[] args){
    int[] arr={5,9,3,2,1,6,4,7,8};
    Arrays.sort(arr);
    int len=arr.length,start=0,end=len-1,mid=start+(end-start)/2,ele=0;
    while(start<=end && arr[mid]!=ele){
      mid=start+(end-start)/2;
      if(arr[mid]<ele) start=mid+1;
      else end=mid-1;
    }
    if(arr[mid]==ele) System.out.println("Element found.");
    else System.out.println("Not found");
  }
}