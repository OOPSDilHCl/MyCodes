import java.util.Arrays;
public class Sorting1{
  int[] arr;
  //O(n²) algorithm
  Sorting1(int[] arr){
    this.arr=arr.clone();
  }
  public void bubble(){
    int n=arr.length;
    boolean flag=false;
    for(int i=0;i<n-1;i++){
      flag=false;
      for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
          int temp=arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
          flag=true;
        }
      }
        if(!flag){
          break;
        }
    }
  }
  public void display(){
    System.out.println(Arrays.toString(arr));
  }
  public static void main(String[] args){
    int[] arr={6,8,4,3,2,9,7,1,5};
    Sorting1 sort1=new Sorting1(arr);
    Sorting1 sort2=new Sorting1(arr);
    Sorting1 sort3=new Sorting1(arr);
    sort1.bubble();
    sort1.display();
    sort2.selection();
    sort2.display();
    sort3.insertion();
    sort3.display();
  }
  public void selection(){
    int n=arr.length;
    for(int i=0;i<n-1;i++){
      int min=i;
      for(int j=i+1;j<n;j++){
        if(arr[j]<arr[min]){
          min=j;
        }
      }
      int temp=arr[min];
      arr[min]=arr[i];
      arr[i]=temp;
    }
  }
  public void insertion(){
    int n=arr.length;
    for(int i=1,j;i<n;i++){
      int key=arr[i];
      for(j=i-1;j>=0 && arr[j]>key;j--){
        arr[j+1]=arr[j];
      }
      arr[j+1]=key;
    }
  }
}