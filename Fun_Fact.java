public class Fun_Fact{
  public static void main(String[] args){
  System.out.println(fact(6,1));
  }
  //Tail Recursion.
  public static int fact(int n,int k){
    if(n==0){
      return k;
    }
    return fact(n-1,k*n);
  }
}