import java.util.Arrays;
public class Sorted_Squares{
  public static void main(String[] args){
    int[] arr={-7,-3,0,2,3,11};
    int lt=0,rt=arr.length-1,j=rt;
    int[] array=new int[rt+1];
    while(lt<=rt){
      if(Math.abs(arr[lt])<=Math.abs(arr[rt])){
        array[j--]=arr[rt]*arr[rt];
        rt--;
      }else{
        array[j--]=arr[lt]*arr[lt];
        lt++;
      }
    }
    System.out.println(Arrays.toString(array));
  }
}