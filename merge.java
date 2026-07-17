import java.util.Arrays;
public class merge{
  public static void main(String args[]){
    int[] arr={2,8,5,4,3,0,1,7,9,6};
    System.out.println("After Sorting→ ");
    mergeSort(arr,0,arr.length-1);
    System.out.println(Arrays.toString(arr));
  }
  public static void mergeSort(int[] arr, int low, int high){
    if(low>=high)
    return;
    int mid=low+(high-low)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
  }
  public static void merge(int arr[],int low, int mid, int high){
    int m=mid-low+1;
    int n=high-mid;
    int[] leftArr=new int[m];
    int[] rightArr=new int[n];
    for(int i=0;i<m;i++)
     leftArr[i]=arr[low+i];
    for(int j=0;j<n;j++) 
     rightArr[j]=arr[mid+1+j];
    int i=0,j=0,k=low;
    while(i<m && j<n){
      if(leftArr[i]<=rightArr[j])
       arr[k++]=leftArr[i++];
      else arr[k++]=rightArr[j++];
    }
    while(i<m) arr[k++]=leftArr[i++];
    while(j<n) arr[k++]=rightArr[j++];
  }
}