import java.util.*;
public class removeDuplicate{
  public static void main(String[] args){
    int a[] = {0,1,1,1,2,5,5,9};
    int write=0,read=a[0];
    for(int i=1/*i=0 is always false*/;i<a.length;i++){
  if(read!=a[i]){
      a[write]=read;
      read=a[i];
      write++;
      }
    }
    a[write]=read;
    write++;
System.out.println(Arrays.toString(Arrays.copyOf(a,write)));
  }
}