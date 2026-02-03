#include <stdio.h>
int soN(int n)//Sum of N Natural numbers.
{
  if(n==1)
  return 1;
  return n+soN(n-1);
}
int main()
{
  int n;
  printf("Enter the number:");
  scanf("%d",&n);
 printf("Sum of natural numbers=%d",soN(n));
  return 0;
}