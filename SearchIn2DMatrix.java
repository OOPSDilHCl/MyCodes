public class SearchIn2DMatrix{
  public static void main(String[] args){
    int[][] mat={{1,5,6,8},{8,9,9,10},{11,12,13,15}};
  int n=mat.length,m=mat[0].length,j=m-1,target=16;
    for(int i=0;i<n;i++){
      if(mat[i][j]==target){ 
        System.out.println("True");
        return;
      }
      else if(mat[i][j]>target){
        int lt=0,rt=m-1;
        while(lt<=rt){
          int mid=lt+(rt-lt)/2;
          if(mat[i][mid]==target){
           System.out.println("True");
           return;
          }
          else if(mat[i][mid]<target){
            lt=mid+1;
          }else rt=mid-1;
        }
      }
    }
    System.out.println("False");
  }
}
