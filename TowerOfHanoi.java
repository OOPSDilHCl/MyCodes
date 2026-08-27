import java.util.Arrays;
public class TowerOfHanoi{
  public static void TOH(int n,char source,char intermediate,char destination){
    if(n>=1){
    TOH(n-1,source,destination,intermediate);
    System.out.println("Move disk "+n+" from "+source+" to "+destination);
    TOH(n-1,intermediate,source,destination);
    }
  }
  public static void main(String[] args){
    TOH(3,'A','B','C');
  }
}