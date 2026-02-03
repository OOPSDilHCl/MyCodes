#include <stdio.h>//Sum of Digits.
int sod(int n)
{
  if(n==0)
  return 0;
  return n%10+sod(n/10);
}
int main()
{
  int n;
  printf("Enter the number:");
  scanf("%d",&n);
  printf("\nSum of Digits = %d",sod(n));
  return 0;
}