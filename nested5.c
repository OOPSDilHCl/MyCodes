/*
***********
***** *****
****   ****
***     ***
**       **
*         *
**       **
***     ***
****   ****
***** *****
***********
*/
#include <stdio.h> //HOLLOW DIAMOND
int main()
{
  int n,i,j,k;
  printf("Enter the size of diamond: ");
  scanf("%d",&n);
   for(i=n;i>0;i--)
  {
    for(j=1;j<=i;j++)
    printf("*");
    for(k=1;k<=2*(n-i);k++)
    printf(" ");
    for(j=1;j<=i;j++)
    printf("*");
    printf("\n");
  }
  for(i=1;i<=n;i++)
  {
    for(j=1;j<=i;j++)
    printf("*");
    for(k=1;k<=2*(n-i);k++)
    printf(" ");
    for(j=1;j<=i;j++)
    printf("*");
    printf("\n");
  }
  return 0;
}