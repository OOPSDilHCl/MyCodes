import java.util.Scanner;
public class calculator{
  public static void main(String[] args){
   Scanner sc=new Scanner(System.in);
  System.out.println("Enter the numbers a and b.");
    int a=sc.nextInt();
    int b=sc.nextInt();
  System.out.println("Enter the sign: ");
  char ch=sc.next().charAt(0);
  calculator obj=new calculator();
  obj.calculate(a,ch,b);
  }
  void calculate(int a,char sign,int b){
    switch(sign){
      case '+' : System.out.println(a+"+"+b+" = "+(a+b));
      break;
      case '-' : System.out.println(a+"-"+b+" = "+(a-b));
      break;
      case '*' : System.out.println(a+"*"+b+" = "+(a*b));
      break;
      case '/' : if(b!=0){ 
      System.out.println(a+"/"+b+" = "+(a/b));}
      else{
      System.out.println("Not defined.");}
      break;
      case '%' : System.out.println(a+"%"+b+" = "+(a%b));
      break;
      default : System.out.println("Invalid operation!");
    }
  }
}