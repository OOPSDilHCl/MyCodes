public class Revision2{
  public static void main(String[] args){
    int n=7;
    for(int i=0;i<2*n-1;i++){
      for(int j=0;j<2*n-1;j++){
        int top=i,lt=j,bottom=2*(n-1)-i,rt=2*(n-1)-j;
        int num=Math.min(Math.min(top,bottom),Math.min(lt,rt));
        System.out.print(n-num);
      }
      System.out.println();
    }
  }
}
/*
run Revision2.java
7777777777777
7666666666667
7655555555567
7654444444567
7654333334567
7654322234567
7654321234567
7654322234567
7654333334567
7654444444567
7655555555567
7666666666667
7777777777777
*/