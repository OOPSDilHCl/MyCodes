import java.util.Arrays;
import java.util.HashSet;
import java.util.Set;
public class TwoSum{
public static void main(String[] args){
  int arr[]={1,6,5,5,9,3,2},target=6;
  Set<Integer> set=new HashSet<>();
  int len=arr.length,found=0;
  for(int i=0;i<len;i++){
    int complement=target-arr[i];
    if(set.contains(complement)){
      System.out.println(arr[i]+"+"+complement+"="+target);
      found=1;
      break;
    }
    set.add(arr[i]);
  }
    if(found==0)
    System.out.println("No pairs exist");
 }
}