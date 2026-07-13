import java.util.*;
public class SortNamesString
{
  public static void main(String[] args)
  {
    Scanner in=new Scanner(System.in);
    System.out.println("Enter the names: ");
    String str=in.nextLine();
    String[] starr=str.split("\\s+");
   /*split("\\s+") function splits string into each word separated by tab new line or space.*/
    int l=starr.length,i,j;
    for(i=1;i<l;i++){
      String temp=starr[i];
      for(j=i-1;j>=0&&(starr[j].compareTo(temp)>0);j--){
        starr[j+1]=starr[j];
      }
      starr[j+1]=temp;
    }
    for(String name : starr){
      System.out.print(name+" ");
    }
    in.close();
  }
}