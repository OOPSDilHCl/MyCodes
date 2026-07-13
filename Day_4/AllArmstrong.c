#include <stdio.h>
#include <math.h>
int main()
{
  int range,n,c,arm;
  printf("Enter the range: ");
  scanf("%d",&range);
  int i=0;
  while(i<=range)
  {
  c=0;
  n=i;
  do //so that 0 is counted as 1 digit.
  {
    c++;
    n/=10;
  }while(n>0);
  n=i;
  arm=0;
  do
  {
    arm+=(int)pow(n%10,c);
    n/=10;
  }while(n>0);
  if(arm==i)
  printf("%d\t",i);
  i++;
  }
  return 0;
}