/*  1 
   212
  32123
 4321234
543212345 */
#include <stdio.h>
int main()
{
 int n;
 printf("Enter the height of triangle:");
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {
   for(int j=1;j<=n-i;j++)
   printf(" ");
   for(int j=i;j>1;j--)
   printf("%d",j);
   for(int j=1;j<=i;j++)
   printf("%d",j);
  printf("\n");
 }
return 0;
}