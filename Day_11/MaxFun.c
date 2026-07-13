#include <stdio.h>
int max(int a,int b)
{
  return a>b?a:b;
}
int main()
{
 int n,m;
 printf("Enter any two numbers: ");
 scanf("%d %d",&n,&m);
 printf("Maximum = %d",max(n,m));
 return 0;
}