import java.util.Arrays;
public class RotateArr{
  public static void main(String args[]){
    int arr[]={3,4,5,1,2};
    int l=arr.length,k=3;//k=k%n;
    int temp[]=Arrays.copyOf(arr,k);
    for(int i=k;i<l;i++){
      arr[i-k]=arr[i];
    }
    for(int j=l-k,i=0;j<l;j++){
      arr[j]=temp[i++];
    }
    System.out.println(Arrays.toString(arr));
  }
}