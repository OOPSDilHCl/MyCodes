public class Fibonacci{
  public static void main(String[] args){
  for(int i=0;i<=8;i++)
  {
   System.out.printf("%d  ",fibo(i));
  }
  }
  public static int fibo(int n){
    if(n==0)
     return 0;
    else if(n==1)
     return 1;
    else
     return fibo(n-1)+fibo(n-2);
  }
}