#include <stdio.h>
//printf returns no. of characters.
int main()
{
  int x=printf("Hello");
  printf("%d",x);//Hello5
  printf("%d",printf("Hi"));//Hi2
  return 0;
}