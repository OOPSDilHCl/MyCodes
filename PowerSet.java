public class PowerSet{
  public static void main(String[] args){
    String s="abcd";
    int n=s.length(),total=1<<n;
    StringBuilder sb=new StringBuilder();
    //0 to 2^n - 1.
    for(int mask=0;mask<total;mask++){
      //clear sb → setLength(0).
      sb.setLength(0);
      for(int i=0;i<n;i++){
        /*Operator != has higher precedence than & thus use a bracket.*/
        if((mask & (1<<i))!=0){
          sb.append(s.charAt(i));
        }
      }
      System.out.println(sb);
    }
  }
}