public class Pow{
 public static double power(double x,int n){
    if(x==0) return 0;
    if(n==0 || x==1) return 1;
    if(n<0){
      x=1/x;
      n=-n;
    }
    return x*power(x,n-1);
  }
  public static void main(String[] args){
 System.out.printf("%.4f\n",power(2,10));
 System.out.printf("%.4f\n",power(2,-2));
  }
}