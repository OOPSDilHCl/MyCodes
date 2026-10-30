import java.util.Stack;
import java.util.Scanner;
import java.util.Map;
public class BalancedParantheses{
  public static void main(String[] args){
    Scanner input=new Scanner(System.in);
    String str=input.nextLine().trim();
    Stack<Character> st=new Stack<>();
    Map<Character,Character> map=Map.of(
      '(',')',
      '{','}',
      '[',']');
    for(char c : str.toCharArray()){
      if(c=='('||c=='{'||c=='['){
        st.push(c);
      }else if(c==')'||c=='}'||c==']'){
        if(st.isEmpty() || map.get(st.pop())!=c){
          System.out.println("false");
          input.close();
          System.exit(0);
        }
      }
    }
    if(st.isEmpty())
    System.out.println("true");
    else System.out.println("false");
    input.close();
  }
}