import java.util.Scanner;
public class RomanToInteger{
  public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter roman numeral:");
    String s=sc.nextLine();
    int len=s.length(),num=0;
    for(int i=0;i<len;i++){
      char ch=s.charAt(i);
      if(ch=='M'){
        num+=1000;
      }
      else if(ch=='C'){
        if(i<len-1 && s.charAt(i+1)=='M'){
          num+=900;
          i++;
        }
        else if(i<len-1 && s.charAt(i+1)=='D'){
          num+=400;
          i++;
        }
        else num+=100;
      }
      else if(ch=='X'){
        if(i<len-1 && s.charAt(i+1)=='C'){
          num+=90;
          i++;
        }
        else if(i<len-1 && s.charAt(i+1)=='L'){
          num+=40;
          i++;
        }
        else num+=10;
      }
      else if(ch=='I'){
        if(i<len-1 && s.charAt(i+1)=='X'){
          num+=9;
          i++;
        }
        else if(i<len-1 && s.charAt(i+1)=='V'){
          num+=4;
          i++;
        }
        else num+=1;
      }
      else if(ch=='D'){
        num+=500;
      }
      else if(ch=='L'){
        num+=50;
      }
      else if(ch=='V'){
        num+=5;
      }
    }
    System.out.println(num);
  }
}