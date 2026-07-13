#include <stdio.h>
#include <stdbool.h>
bool isPerfect(int a)
{
  if(a<=1) return false;
  int sum=1;
  for(int i=2;i*i<=a;i++)
  {
    if(a%i==0)
    {
    sum+=i;
    if(i!=a/i)
     sum += a/i;
    }
  }
  return sum==a;
}
int main()
{
 int n;
 printf("Enter a number: ");
 scanf("%d",&n);
 if(isPerfect(n))
 printf("%d is a perfect number.",n);
 else
 printf("%d is not a perfect number.",n);
 return 0;
}