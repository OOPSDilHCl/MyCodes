public class NestingDepth{
  public static void main(String[] args){
    String s="(1+(2*3)+((8)/4))+1*2";
    int level=0,len=s.length(),max=0;
    for(int i=0;i<len;i++){
      if(s.charAt(i)=='('){
        level++;
        max=Math.max(level,max);
      }else if(s.charAt(i)==')'){
        level--;
      }
    }
    System.out.println(max);
  }
}