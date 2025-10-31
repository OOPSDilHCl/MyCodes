#include <stdio.h> //Armstrong number
int power(int n,int c)
{
  int pro=1;
  for(int i=1;i<=c;i++)
  {
    pro=pro*n;
  }
  return pro;
}
int main()
{
  int num,c=0,arm=0;
  printf("Enter a number: ");
  scanf("%d",&num);
  int n=num;
  while(n>0)
  {
    n=n/10;
    c++;
  }
  int n1=num;
  while(n1>0)
  {
    arm=arm+power(n1%10,c);
    n1=n1/10;
  }
  if(arm==num)
  printf("The number %d is armstrong number.",num);
  else
  printf("The number %d is not a armstrong number.",num);
  return 0;
}