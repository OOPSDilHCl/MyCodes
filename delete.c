#include <stdio.h>
int main()
{
  int a=5,b=6;
  float im,ex;
  im=(a+b)/2;
  ex=(float)(a+b)/2;
  float x=(a+b)/2.0;
  int p=0,q=1,r=-1;
  p+=q-=r*=10;
  printf("%f,%f,%f,%d",im,ex,x,p);
  printf("Saurabh bhai ko proof ki phone pe coding badhiya h");
  return 0;
}