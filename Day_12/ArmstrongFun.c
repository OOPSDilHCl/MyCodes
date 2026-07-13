#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool isArmstrong(int a)
{
  if(a<0) return false;
  int tem=a,arm=0,c=(int)log10(a)+1;
  while(tem>0)
  {
   arm+=(int)pow(tem%10,c);
   tem/=10;
  }
  return a==arm;
}
int main()
{
 int n;
 printf("Enter a number: ");
 scanf("%d",&n);
 if(isArmstrong(n))
 printf("%d is a armstrong number.",n);
 else
 printf("%d is not armstrong number.",n);
 return 0;
}