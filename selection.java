import java.util.*;
public class selection{
  public static void main(String args[]){
    int[] arr={2,9,1,5,6,8,3,4,7,0};
    int l=arr.length;
    for(int i=0;i<l-1;i++){
      int min=arr[i],key=i;
      for(int j=i+1;j<l;j++){
        if(arr[j]<min){
          min=arr[j];
          key=j;
        }
      }
      int temp=arr[key];
      arr[key]=arr[i];
      arr[i]=temp;
    }
    System.out.println(Arrays.toString(arr));
  }
}