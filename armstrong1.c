#include <stdio.h>
int main()
{
  int num,c=0,pro=1,arm1=0;
  printf("Enter a number: ");
  scanf("%d",&num);
  int n=num;
  while(n>0)
  {
    c++;
    n=n/10;
  }
  n=num;
  while(n>0)
  {
    pro=1;
    for(int i=1;i<=c;i++)
    {
      pro=pro*(n%10);
    }
    n=n/10;
    arm1=arm1+pro;
  }
  if(arm1==num)
  printf("%d is an Armstrong number.",num);
  else
printf("%d is not an Armstrong number.",num);
  return 0;
}