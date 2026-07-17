import java.util.Map;
import java.util.HashMap;
public class MaxMinFreq{
  public static void main(String args[]){
    int arr[]={6,6,9,7,0,4,0,4,9,9,9,2,2};
    Map<Integer,Integer> map=new HashMap<>();
    for(int num : arr){
      map.put(num,map.getOrDefault(num,0)+1);
    }
    int maxFreq=0,minFreq=arr.length+1,maxFreqkey=arr[0],minFreqkey=arr[0];
    for(int Key : map.keySet()){
      int freq=map.get(Key);
      if(freq<minFreq){
        minFreq=freq;
        minFreqkey=Key;
      }
      if(freq>maxFreq){
        maxFreq=freq;
        maxFreqkey=Key;
      }
    }
    System.out.println("Most occuring element "+maxFreqkey+" "+maxFreq+" times occured. Least occuring element "+minFreqkey+" "+minFreq+" times occured.");
  }
}