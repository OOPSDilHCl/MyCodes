public class SquareRootBS{
  public static void main(String[] args){
    int sq=100,lt=1,rt=sq/2,mid=0,candi=0;
    if(sq<=1){
      System.out.println(sq);
      return;
    }
    while(lt<=rt){
      mid=lt+(rt-lt)/2;
      if((long)mid*mid==sq){
        System.out.println(mid);
        return;
      }
      else{
       if((long)mid*mid<sq){
         candi=mid;
         lt=mid+1;
       }
       else{
        rt=mid-1;
       }
      }
    }
    System.out.println(candi);
  }
}