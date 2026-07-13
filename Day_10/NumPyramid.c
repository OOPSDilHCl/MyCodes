#include <stdio.h>
int main()
{
 int n,num=1;
 printf("Enter the height of pyramid:");
 scanf("%d",&n);
 for(int i=1;i<=n;i++)
 {
   num=1;
   for(int j=1;j<=n-i;j++)
   printf(" ");
   for(int j=i;j>1;j--)
   {
   printf("%d",num);
   num++;
   }
   for(int j=1;j<=i;j++)
   {
   printf("%d",num);
   num--;
   }
  printf("\n");
 }
return 0;
}