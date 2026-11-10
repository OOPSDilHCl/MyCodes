public class CelebrityProblem{
  public static void main(String[] args){
    int[][] arr={
      {0,1,1,0},
      {0,0,0,0},
      {0,1,0,0},
      {0,1,0,0}};
    int n=arr.length, m=arr[0].length;
    int l=0, r=n-1;
    while(l<r){
      if(arr[l][r]==1) l++;
      else if(arr[r][l]==1) r--;
      else{ l++; r--; }
    }
    if(l>r){
      System.out.println("No celebrity");
    }else{
      for(int i=0;i<m;i++){
        if(arr[l][i]==0 && arr[i][l]==1 || l==i)
          continue;
        else{
          System.out.println("No celebrity");
          System.exit(0);
        }
      }
      System.out.println(l);
    }
  }
}