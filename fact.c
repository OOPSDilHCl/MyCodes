#include <stdio.h>
int main ()
{
  int num;
  long long fact=1;
  printf("Enter any number: \n");
  scanf("%d",&num);
  if(num<0)
  {
    printf("Factorial of negative numbers is not defined. ");
    return 0;
  }
  for(int i=1;i<=num;i++)
  {
    fact*=i;
  }
  printf("The factorial of the number is %lld",fact);
  return 0;
}