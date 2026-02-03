#include <stdio.h>
int main()
{
  int x=3,y=4,a=6,c=7,result;
  result=(x>y) + ++a||c;
  printf("%d",result);
  return 0;
}