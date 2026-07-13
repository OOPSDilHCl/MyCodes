import java.util.*;
public class RowSum
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
    for(int row[] : mat){
     int Rowsum=0;
     for(int ele : row){
      Rowsum+=ele;
     }
     System.out.println("Row_"+i+" sum="+Rowsum);
     i++;
    }
    scan.close();
  }
}