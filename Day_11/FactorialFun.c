#include <stdio.h>
int fact(int a)
{
  int factorial=1;
  for(int i=2;i<=a;i++)
  {
    factorial*=i;
  }
  return factorial;
}
int main()
{
 int n;
 printf("Enter a number: ");
 scanf("%d",&n);
printf("Factorial of %d = %d",n,fact(n));
 return 0;
}