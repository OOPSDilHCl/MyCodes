import java.util.Arrays;
public class Sorting012{
  public static void main(String[] args){
    int[] arr={2,0,1,1,0,0,1};
    int len=arr.length,low=0,mid=0,
    high=len-1;
    while(mid<=high){
      if(arr[mid]==0){
        arr[mid]=arr[low];
        arr[low]=0;
        low++;
        mid++;
      }
      else if(arr[mid]==1){
        mid++;
      }
      else{
        arr[mid]=arr[high];
        arr[high--]=2;
      }
    }
    System.out.println(Arrays.toString(arr));
  }
}