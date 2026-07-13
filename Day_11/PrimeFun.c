#include <stdio.h>
#include <stdbool.h>
bool isPrime(int a)
{
  if(a<=1) return false;
  for(int i=2;i*i<=a;i++)
  {
    if(a%i==0)
    return false;
  }
  return true;
}
int main()
{
 int n;
 printf("Enter a number: ");
 scanf("%d",&n);
 if(isPrime(n))
 printf("It is a prime number = %d",n);
 else
 printf("Not a prime number = %d",n);
 return 0;
}