public class Revision3{
  public static void main(String[] args){
    int m=36,n=54,a=m,b=n;
    while(m!=0 && n!=0){
      if(m>n) m=m%n;
      else n=n%m;
    }
    if(m==0) System.out.println("GCD = "+n+", LCM = "+(a*b)/n+".");
    else System.out.println("GCD = "+m+", LCM = "+(a*b)/m+".");
  }
}
/* GCD
run Revision3.java
GCD = 12, LCM = 72.
run Revision3.java
GCD = 18, LCM = 108.
*/