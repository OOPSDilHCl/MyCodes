import java.util.*;
public class TrappingRainWater{
  public static void main(String[] args){
    int arr[]={0,1,0,2,1,0,1,3,2,1,2,1},len=arr.length,water=0;
    for(int i=0;i<len;i++){
     int leftMax=0,rightMax=0,left=i,right=i;
      while(left>0){
        leftMax=Math.max(arr[left--],leftMax);
      }
      while(right<len){
        rightMax=Math.max(arr[right++],rightMax);
      }
      if(Math.min(leftMax,rightMax)-arr[i]>0)
      water+=Math.min(leftMax,rightMax)-arr[i];
    }
    System.out.println(water);
  }
}