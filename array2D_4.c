//Transpose of a 3×3 matrix.
#include <stdio.h>
int main()
{
  int i,j,temp,arr[3][3];
  printf("Enter the elements of array: ");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }
  for(i=0;i<3;i++)
  {
    for(j=i+1;j<3;j++)
    {
      temp=arr[i][j];
      arr[i][j]=arr[j][i];
      arr[j][i]=temp;
    }
  }
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    printf("%d\t",arr[i][j]);
    printf("\n");
  }
  return 0;
}