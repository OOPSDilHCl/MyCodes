#include <stdio.h>
int main()
{
  int range;
  printf("Enter the range : ");
  scanf("%d",&range);
  if(range<2)
  {
printf("%d is not a valid range.",range);
   return 0;
  }
  int num=2;
  while(num<=range)
  {
    int isPrime=1;
    for(int i=2;i*i<=num;i++)
    {
      if(num%i==0)
      {
        isPrime=0;
        break;
      }
    }
    if(isPrime)
      {
        printf("%d\t",num);
      }
    num++;
  }
  return 0;
}