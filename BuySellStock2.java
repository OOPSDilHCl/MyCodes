public class BuySellStock2{
  public static void main(String[] args){
    int[] arr={1,6,0,5,1,8};
    int len=arr.length,d1=0,d2=len-1;
    for(int i=0,j=len-1;i<j;i++,j--){
      if(arr[i]<arr[d1] && d1<d2){
        d1=i;
      }
      if(arr[j]>arr[d2] && d1<d2){
        d2=j;
      }
    }
    if(arr[d1]<arr[d2])
    System.out.println(arr[d2]+"-"+arr[d1]+"="+(arr[d2]-arr[d1]));
    else
    System.out.println(0);
  }
}