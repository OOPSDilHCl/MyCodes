/* 
   1234567
   123 567 
   12   67 
   1     7
   12   67 
   123 567 
   1234567
*/
#include <stdio.h> //HOLLOW Diamond number
int main()
{
  int n,i,j,k;
  printf("Enter the size of diamond: ");
  scanf("%d",&n);
   for(i=n;i>0;i--)
  {
    k=1;
    for(j=1;j<=i;j++)
    {
    printf("%d",k);
    k++;
    }
    for(j=1;j<=2*(n-i);j++)
    {
    printf(" ");
    k++;
    }
    for(j=1;j<=i;j++)
    {
    printf("%d",k);
    k++;
    }
    printf("\n");
  }
  for(i=1;i<=n;i++)
  {
    k=1;
    for(j=1;j<=i;j++)
    {
    printf("%d",k);
    k++;
    }
    for(j=1;j<=2*(n-i);j++)
    {
    printf(" ");
    k++;
    }
    for(j=1;j<=i;j++)
    {
    printf("%d",k);
    k++;
    }
    printf("\n");
  }
  return 0;
}