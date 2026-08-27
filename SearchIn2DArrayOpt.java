public class SearchIn2DArrayOpt{
  public static void main(String[] args){
    int mat[][]={{1,2,4},{6,7,8},{9,10,34}},n=mat.length,m=mat[0].length,target=7;
    int lt=0,rt=n*m-1;
    while(lt<=rt){
      int mid=lt+(rt-lt)/2;
      int r=mid/m,c=mid%m;
      if(mat[r][c]==target){
        System.out.println("True");
        return;
      }
      else if(mat[r][c]<target){
        lt=mid+1;
      }else{
        rt=mid-1;
      }
    }
    System.out.println("False");
  }
}