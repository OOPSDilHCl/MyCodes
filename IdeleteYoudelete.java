import java.util.Scanner;
public class IdeleteYoudelete{
 public static void main(String[] args){
  Scanner input=new Scanner(System.in);
        int t=input.nextInt();
        input.nextLine();
        while(t-->0){
     String str=input.nextLine();
 StringBuilder sb=new StringBuilder(str);
        int index=sb.indexOf("0");
        sb.deleteCharAt(index);
        index=sb.indexOf("1");
        sb.deleteCharAt(index);       
        System.out.println(sb);
        }
    input.close();
  }
}