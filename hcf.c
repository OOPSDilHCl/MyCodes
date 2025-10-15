#include <stdio.h>
int main()
{
  int a,b,hcf=1;
  printf("Enter two numbers: ");
  scanf("%d%d",&a,&b);
  int min=(a<b)?a:b;
  for(int i=1;i<=min;i++)
  {
    if(a%i==0 && b%i==0)
    hcf=i;
  }
  printf("HCF of %d and %d is %d\n",a,b,hcf);
  return 0;
}