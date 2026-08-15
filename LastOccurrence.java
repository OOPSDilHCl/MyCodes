public class LastOccurrence{
  public static void main(String[] args){
    int arr[]={3,4,13,13,13,20,60,67},len=arr.length,target=13,lastIn=-1;
    int lt=0,rt=len-1;
    while(lt<=rt){
      int mid=lt+(rt-lt)/2;
      if(arr[mid]==target){
        lastIn=mid;
        lt=mid+1;
      }
      else if(arr[mid]>target){
        rt=mid-1;
      }
      else lt=mid+1;
    }
    System.out.println(lastIn);
  }
}