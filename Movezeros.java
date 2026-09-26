import java.util.Arrays;
public class Movezeros{
  public static void main(String[] args){
    int[] arr={0,0,8,7,4,0,0,2,6,0};
    int i=0,j=0;
    while(arr[j]!=0) j++;
    for(i=j+1;i<arr.length;i++){
      if(arr[i]!=0){
        arr[j++]=arr[i];
        arr[i]=0;
      }
    }
System.out.println(Arrays.toString(arr));
  }
}