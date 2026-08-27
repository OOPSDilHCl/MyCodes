public class PaintersPartition{
  public static boolean paintersPartition(int arr[],int mid,int k){
    int painters=1,board=0;
    for(int b:arr){
      board+=b;
      if(board>mid){
        painters++;
        board=b;
      }
    }
    return painters<=k;
  }
  public static void main(String[] args){
    int arr[]={5,3,8,8},len=arr.length,k=3;
    int lt=0,rt=0,ans=0;
    for(int i:arr){
      lt=Math.max(lt,i);
      rt+=i;
    }
    while(lt<=rt){
      int mid=lt+(rt-lt)/2;
      if(paintersPartition(arr,mid,k)){
        ans=mid;
        rt=mid-1;
      }else{
        lt=mid+1;
      }
    }
    System.out.println(ans);
  }
}