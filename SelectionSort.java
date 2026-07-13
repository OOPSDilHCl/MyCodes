import java.util.*;
public class SelectionSort{
  public static void main(String[] args){
    Scanner input=new Scanner(System.in);
    int n=input.nextInt();
    int[] arr=new int[n];
    for(int i=0;i<n;i++){
      arr[i]=input.nextInt();
    }
    for(int i=0;i<n-1;i++){
     int min=arr[i],key=i;
      for(int j=i+1;j<n;j++){
        if(arr[j]<min){
          min=arr[j];
          key=j;
        }
      }
        int temp=arr[i];
        arr[i]=arr[key];
        arr[key]=temp;
    }
    System.out.println(Arrays.toString(arr));
    input.close();
  }
}