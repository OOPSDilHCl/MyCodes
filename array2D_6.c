#include <stdio.h>
int main()
{
  int r1,c1,r2,c2,sum=0,i,j,k;
  printf("Enter the rows and columns of pre-multiplied matrix: ");
  scanf("%d%d",&r1,&c1);
  printf("Enter the rows and columns of post-multiplied matrix: ");
  scanf("%d%d",&r2,&c2);
  if(c1==r2)
  {
    int pre[r1][c1],post[r2][c2],pro[r1][c2];
  printf("Enter the elements of pre-multiplied matrix: ");
  for(i=0;i<r1;i++)
  {
    for(j=0;j<c1;j++)
    scanf("%d",&pre[i][j]);
  }
  printf("Enter the elements of post-multiplied matrix: ");
  for(i=0;i<r2;i++)
  {
    for(j=0;j<c2;j++)
    scanf("%d",&post[i][j]);
  }
  for(i=0;i<r1;i++)
  {
    for(j=0;j<c2;j++)
    {
      for(k=0;k<c1;k++)//or k<r2
      {
        sum+=pre[i][k]*post[k][j];
      }
      pro[i][j]=sum;
      sum=0;
    }
  }
  for(i=0;i<r1;i++)
  {
    for(j=0;j<c2;j++)
    printf("%d\t",pro[i][j]);
    printf("\n");
  }
  }
  else 
  {
    printf("Multiplication is not possible!");
  }
  return 0;
}