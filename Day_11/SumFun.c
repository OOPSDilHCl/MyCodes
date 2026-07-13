#include <stdio.h>
int sum(int a,int b)
{
  return a+b;
}
int main()
{
 int n,m;
 printf("Enter any two numbers: ");
 scanf("%d %d",&n,&m);
 printf("%d + %d = %d",n,m,sum(n,m));
 return 0;
}