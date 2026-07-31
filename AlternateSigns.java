import java.util.Arrays;
public class AlternateSigns{
  public static void main(String[] args){
    int[] a={-5,-1,9,7,-6,6};
    int len=a.length,posi=0,negi=1;
    int[] b=new int[len];
    for(int i=0;i<len;i++){
      if(a[i]<0){
        b[negi]=a[i];
        negi+=2;
      }
      else if(a[i]>0){
        b[posi]=a[i];
        posi+=2;
      }
    }
  a=Arrays.copyOf(b,len);
  System.out.println(Arrays.toString(a));
  }
}