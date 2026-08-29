public class RotateString{
  public static void main(String[] args){
    String s="jello",g="ojell";
    if(s.length()!=g.length()){
      System.out.println("Not a rotation!");
      return;
    }
    String t=s+s;
    if(t.contains(g)){
   System.out.println("Rotation valid.");
    }else System.out.println("Not a rotation!");
  }
}