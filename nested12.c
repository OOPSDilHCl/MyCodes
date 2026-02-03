/*   *
    * *
   *   *
  *     *
 *       *
*         *
 *       *
  *     *
   *   *
    * *
     *    */
#include <stdio.h>
int main()
{
  int n,i,j,k;
  printf("Enter the size of diamond: ");
  scanf("%d",&n);
   for(i=1;i<=n;i++)
  {
    for(j=1;j<=n-i;j++)
    printf(" ");
    if(i==1)
    printf("*");
    else
    {
    printf("*");
   for(k=1;k<=2*i-3;k++)
    printf(" ");
    printf("*");
    }
    printf("\n");
  }
  for(i=n-1;i>=1;i--)
  {
    for(j=1;j<=n-i;j++)
    printf(" ");
    if(i==1)
    printf("*");
    else
    {
    printf("*");
   for(k=1;k<=2*i-3;k++)
    printf(" ");
    printf("*");
    }
    printf("\n");
  }
  return 0;
}