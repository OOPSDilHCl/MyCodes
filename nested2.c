//nested2.c
/*
    A 
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHJ
 ABCDEFG 
  ABCDE
   ABC
    A
*/
#include <stdio.h>
int main()
{
  char ch='A';
  int n;
  printf("Enter the number of series: ");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    ch='A';
    for(int j=1;j<=n-i;j++)
      printf(" ");
    for(int k=1;k<=(2*i-1);k++)
    {
      printf("%c",ch);
      ch++;
    }
    printf("\n");
  }
  for(int i=n-1;i>=1;i--)
  {
    ch='A';
    for(int j=1;j<=n-i;j++)
    printf(" ");
    for(int k=1;k<=2*i-1;k++)
    {
      printf("%c",ch);
      ch++;
    }
    printf("\n");
  }
  return 0;
}