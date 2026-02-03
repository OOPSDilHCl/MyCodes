#include <stdio.h>
int main()
{
  int x=10;
  int* y=&x;
  int** z=&y;
  printf("%d\n",x);
  printf("%p\n",&x);
  printf("%p\n",y);
  printf("%d\n",*y);
  printf("%p\n",&y);
  printf("%p\n",z);
  printf("%p\n",*z);
  printf("%d\n",**z);
  printf("%p\n",&z);
return 0;
}