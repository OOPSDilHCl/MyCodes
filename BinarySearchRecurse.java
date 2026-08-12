import java.util.*;
public class BinarySearchRecurse{
  public static void main(String[] args){
    int[] arr={1,3,6,8,9,18,19,25};
    int len=arr.length,ele=17,start=0,end=len-1;
    binarySearch(arr,start,end,ele);
  }
  public static void binarySearch(int[] bin,int start,int end,int target){
    int mid=start+(end-start)/2;
    if(bin[mid]==target){
     System.out.println("Element found");
     return;
    }
    else if(start>end){
      System.out.println("Element not found");
      return;
    }
     if(bin[mid]<target){
      binarySearch(bin,mid+1,end,target);
    }
    else binarySearch(bin,start,mid-1,target);
  }
}