public class Maximum1s2DArray{
  public static void main(String[] args){
    int mat[][]={{0,0,1},{1,1,1},{0,1,1}}, m=mat.length,n=mat[0].length;
    int col=Integer.MAX_VALUE,row=-1;
    for(int i=0;i<m;i++){
      int lt=0,rt=n-1;
      while(lt<=rt){
        int mid=lt+(rt-lt)/2;
        if(mat[i][mid]==1){
          if(col>mid){
            col=mid;
            row=i;
          }
          rt=mid-1;
        }else{
          lt=mid+1;
        }
      }
    }
    System.out.println(row);
  }
}