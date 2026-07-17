import java.util.*;
public class bubble{
  public static void main(String args[]){
    int[] arr={5,7,3,2,0,6,8,1,4,9};
    int l=arr.length;
    for(int i=0;i<l-1;i++){
      boolean flag=false;
      for(int j=0;j<l-i-1;j++){
        if(arr[j]>arr[j+1]){
          int temp=arr[j+1];
          arr[j+1]=arr[j];
          arr[j]=temp;
          flag=true;
        }
      }
      if(!flag) break;
    }
    System.out.println(Arrays.toString(arr));
  }
}