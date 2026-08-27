public class SmallestDivisorWithThreshold{
  public static int threshold(int[] arr,int mid){
    int len=arr.length,sum=0;
    for(int i=0;i<len;i++){
      sum+=arr[i]/mid;
      if(arr[i]%mid!=0)
       sum+=1;
    }
    return sum;
  }
  public static void main(String[] args){
    int arr[]={8,4,2,3},len=arr.length,limit=10;
    int lt=1,rt=Integer.MIN_VALUE;
    for(int x:arr) rt=Math.max(rt,x);
    while(lt<rt){
      int mid=lt+(rt-lt)/2;
      if(threshold(arr,mid)<=limit){
        rt=mid;
      }else{
        lt=mid+1;
      }
    }
    System.out.println(lt);
  }
}