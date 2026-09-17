public class MyAToIRecursion{
  private static int helper(String s,int i,int res,int sign){
    char ch=s.charAt(i);
    int len=s.length();
    if(i>=len || !Character.isDigit(ch)){
      return (int)(sign*res);
    }
    int digit=ch-'0';
  if(res>((Integer.MAX_VALUE)-digit)/10){
    return sign==1?Integer.MAX_VALUE:Integer.MIN_VALUE;
    }
    res=res*10+digit;
    return helper(s,i+1,res,sign);
  }
  public static int myAToI(String s){
    int i=0;
    int len=s.length();
    while(i<len && s.charAt(i)==' '){
      i++;
    }
    int sign=1;
    if(i<len && (s.charAt(i)=='+' || s.charAt(i)=='-')){
      sign=(s.charAt(i)=='-')?-1:1;
      i++;
    }
    return helper(s,i,0,sign);
  }
  public static void main(String[] args){
    String s="  -48299+68 hello";
    int num=myAToI(s);
    System.out.println(num);
  }
}