import java.util.Arrays;
public class LongestConsecutiveSequence{
  public static void main(String[] args){
    int[] arr={100,101,102,4,200,1,2};
    Arrays.sort(arr);
   int len=arr.length,count=1,max_count=1,priorele=arr[0];
    for(int i=1;i<len;i++){
      if(priorele+1==arr[i]){
        count++;
        priorele=arr[i];
      }
      else if(arr[i]!=priorele){
        count=1;
        priorele=arr[i];
      }
        max_count=Math.max(count,max_count);
    }
    System.out.println(max_count);
  }
}