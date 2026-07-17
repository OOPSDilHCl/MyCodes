import java.util.Map;
import java.util.HashMap;
public class CountFreq{
  public static void main(String args[]){
    int arr[]={6,9,7,0,4,0,4,9,9,2};
    Map<Integer,Integer> map=new HashMap<>();
    for(int num : arr){
      map.put(num,map.getOrDefault(num,0)+1);
    }
    System.out.println(map);
  }
}