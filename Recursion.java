public class Recursion{
  public static int display(int n){
    if(n==0){
      return 0;
    }
    System.out.println(n);
    return display(n-1);
  }
  public static int fact(int n,int k){
    if(n==0){
      return k;
    }
    return fact(n-1,k*n);
  }
  public static void main(String[] args){
    display(5);
    System.out.println("Factorial = "+fact(5,1));
  }
}