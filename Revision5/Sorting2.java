import java.util.Arrays;
public class Sorting2{
  //O(nlogn) algorithm
  int[] arr;
  Sorting2(int[] arr){
  this.arr=Arrays.copyOf(arr,arr.length);
  }
  public void mergeSort(){
    mergeSort(0,arr.length-1);
  }
  public void quick(){
    quickSort(0,arr.length-1);
  }
  private int hoarePS(int lt,int rt){
    int i=lt-1,j=rt+1,pivot=arr[lt];
    while(true){
     do{
       i++;
     }while(arr[i]<pivot);
     do{
       j--;
     }while(arr[j]>pivot);
     if(i>=j) return j;
     int t=arr[i];
     arr[i]=arr[j];
     arr[j]=t;
    }
  }
  private void quickSort(int lt,int rt){
    if(lt<rt){
      int pivot=hoarePS(lt,rt);
      quickSort(lt,pivot);
      quickSort(pivot+1,rt);
    }
  }
  private void mergeSort(int lt,int rt){
    if(lt>=rt) return;
    int md=lt+(rt-lt)/2;
    mergeSort(lt,md);
    mergeSort(md+1,rt);
    merge(lt,md,rt);
  }
  private void merge(int lt,int mid,int rt){
    int m=mid-lt+1;
    int n=rt-mid;
    int ltAr[]=new int[m];
    int rtAr[]=new int[n];
    for(int i=0;i<m;i++){
      ltAr[i]=arr[lt+i];
    }
    for(int i=0;i<n;i++){
      rtAr[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=lt;
    while(i<m && j<n){
      if(ltAr[i]<rtAr[j]){
        arr[k++]=ltAr[i++];
      }
      else{
        arr[k++]=rtAr[j++];
      }
    }
    while(i<m){
      arr[k++]=ltAr[i++];
    }
    while(j<n){
      arr[k++]=rtAr[j++];
    }
  }
  public void display(){
    System.out.println(Arrays.toString(arr));
  }
  public static void main(String[] args){
    int[] arr={6,8,4,3,9,1,5,7,2};
    Sorting2 ob1=new Sorting2(arr);
    Sorting2 ob2=new Sorting2(arr);
    ob2.quick();
    ob2.display();
    ob1.mergeSort();
    ob1.display();
  }
}
/*
The one conceptual point I would make sure you remember is:
Lomuto partition usually returns the pivot's final position. Hoare partition returns a partition boundary, not necessarily the pivot's position.
*/
/*
run Sorting2.java
[1, 2, 3, 4, 5, 6, 7, 8, 9]
[1, 2, 3, 4, 5, 6, 7, 8, 9]
*/