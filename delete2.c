#include <stdio.h>
int main()
{
  for(long int i=0;i<=100000;i++)
  printf("Loading: %ld\r %%",i);
  return 0;
}