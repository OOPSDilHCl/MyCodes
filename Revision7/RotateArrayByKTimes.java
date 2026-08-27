import java.util.Arrays;
public class RotateArrayByKTimes{
  private static void reverse(int[] a,int i,int j){
    while(i<=j){
      int t=a[i];
      a[i]=a[j];
      a[j]=t;
      i++;
      j--;
    }
  }
  private static void rotateArray(int[] arr,int k){
    reverse(arr,0,k-1);
    reverse(arr,k,arr.length-1);
    reverse(arr,0,arr.length-1);
  }
  public static void main(String[] args){
    int[] arr1={1,2,3,4,5,6,7},arr2={1,2,3,4,5,6,7};
   int l1=arr1.length,l2=arr2.length,k=3;
   //Left rotate Array
    rotateArray(arr1,k%l1);
    System.out.println(Arrays.toString(arr1));
   //Right rotate Array
    k=l2-k;
    rotateArray(arr2,k%l2);
    System.out.println(Arrays.toString(arr2));
  }
}
/*
run RotateArrayByKTimes.java
[4, 5, 6, 7, 1, 2, 3]
[5, 6, 7, 1, 2, 3, 4]
*/