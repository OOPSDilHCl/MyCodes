import java.util.Arrays;
public class SetMatrixZero{
  public static void main(String[] args){
  int arr[][]={{9,1,8,2},{10,5,0,9},{7,5,4,1}};
  boolean[] rows=new boolean[arr.length];
  /*arr[0].length==number of columns
    arr.length==number of rows.
  */
  boolean[] columns=new boolean[arr[0].length];
  for(int i=0;i<arr.length;i++){
    for(int j=0;j<arr[0].length;j++){
      if(arr[i][j]==0){
        rows[i]=true;
        columns[j]=true;
      }
    }
  }
  for(int i=0;i<arr.length;i++){
    for(int j=0;j<arr[0].length;j++){
      if(rows[i]||columns[j]){
        arr[i][j]=0;
      }
    }
  }
  System.out.println(Arrays.deepToString(arr));
  }
}