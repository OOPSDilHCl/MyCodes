import java.util.Arrays;
public class Revision4{
  public static void main(String[] args){
    int n=101;
    boolean[] isPrime=new boolean[n];
    Arrays.fill(isPrime,true);
    if(n>0) isPrime[0]=false;
    if(n>1) isPrime[1]=false;
    for(int i=2;i*i<n;i++){
      if(isPrime[i]){
        for(int j=i*i;j<n;j+=i){
          isPrime[j]=false;
        }
      }
    }
    System.out.println("All prime numbers between 1 to n are:");
    for(int i=0;i<n;i++){
      if(isPrime[i])
       System.out.print(i+" ");
    }
  }
}