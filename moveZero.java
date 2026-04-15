import java.util.*;
public class moveZero{
  public static void main(String[] args){
    int arr[] = {0,1,0,3,12};
    int b=0;
    for(int i=0;i<arr.length;i++){
      if(arr[i]!=0) 
      {
       arr[b]=arr[i];
       arr[i]=0;
       b++;
      }
    }
System.out.println(Arrays.toString(arr));
  }
}