import java.util.Arrays;
public class RemoveDup{
  public static void main(String args[]){
    int[] arr={0,5,6,6,6,6,7,7,8,9,9,10,11,11,12,17,17,17,18};
    int l=arr.length,j=1;
    for(int i=1;i<l;i++){
      if(arr[i-1]!=arr[i]){
        arr[j++]=arr[i];
      }
    }
    System.out.println(Arrays.toString(Arrays.copyOf(arr,j)));
  }
}