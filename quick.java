import java.util.Arrays;
public class quick{
  public static int hoarePartitionScheme(int[] arr, int low, int high){
    int i=low-1,j=high+1,pivot=arr[low];
    while(true){
    do{
      i++;
    }while(arr[i]<pivot);
    do{
      j--;
    }while(arr[j]>pivot);
    if(i>=j) return j;
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    }
  }
  public static void quickSort(int[] arr, int low, int high){
    if(low<high){
    int pivot=hoarePartitionScheme(arr,low,high);
    quickSort(arr,low,pivot);
    quickSort(arr,pivot+1,high);
    }
  }
  public static void main(String args[]){
    int[] arr={7,4,9,0,1,6,5,2,3,8};
    quickSort(arr,0,arr.length-1);
    System.out.println(Arrays.toString(arr));
  }
}