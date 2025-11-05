#include <stdio.h>
int main()
{
  /*    A
       AB
      ABC
     ABCD  
    ABCDE*/
  char ch;
  for(int i=1;i<=5;i++)
  {
    ch='A';
    for(int j=1;j<=5-i;j++)
    printf(" ");
    for(int k=1;k<=i;k++)
    {
    printf("%c",ch);
    ch++;
    }
    printf("\n");
  }
  return 0;
}