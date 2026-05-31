#include <stdio.h>
int main()
{
 int n,pro=1;
 printf("Enter a number: ");
 scanf("%d",&n);
 while(n>0)
 {
   pro*=n%10;
   n/=10;
 }
 printf("Product of digits = %d",pro);
 return 0;
}