import java.util.*;
public class insertion{
  public static void main(String[] args){
    int arr[]={7,5,0,1,4,8,6,2,9,3};
    int l=arr.length,i,j;
    for(i=1;i<l;i++){
      int temp=arr[i];
      for(j=i-1;j>=0 && arr[j]>temp;j--){
        arr[j+1]=arr[j];
      }
      arr[j+1]=temp;
    }
    System.out.println(Arrays.toString(arr)+" • ");
  }
}