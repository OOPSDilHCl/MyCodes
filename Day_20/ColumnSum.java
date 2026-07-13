import java.util.*;
public class ColumnSum
{
  public static void main(String[] args)
  {
    Scanner scan=new Scanner(System.in);
    System.out.println("Enter the rows and columns of matrix: ");
    int m=scan.nextInt();
    int n=scan.nextInt();
    System.out.println("Enter elements of the matrix: ");
    int[] mat[]=new int[m][n];
    for(int i=0;i<m;i++)
     for(int j=0;j<n;j++)
      mat[i][j]=scan.nextInt();
    int i=1;  
    for(int j=0;j<n;j++){
     int Columnsum=0;
     for(int k=0;k<m;k++){
      Columnsum+=mat[k][j];
     }
     System.out.println("Column_"+i+" sum="+Columnsum);
     i++;
    }
    scan.close();
  }
}