import java.util.Arrays;
public class Sort_012{
  public static void main(String[] args){
    int[] arr={2,2,1,2,0,1,0,2,1,0,0,1};
    int lt=0,md=0,rt=arr.length-1;
    while(md<=rt){
      if(arr[md]==0){
        arr[md++]=arr[lt];
        arr[lt++]=0;
      }
      else if(arr[md]==1){
        md++;
      }else{
        arr[md]=arr[rt];
        arr[rt--]=2;
      }
    }
    System.out.println(Arrays.toString(arr));
  }
}