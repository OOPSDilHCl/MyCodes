/* 
A      A 
AB    BA 
ABC  CBA
ABCDDCBA
ABC  CBA
AB    BA 
A      A
*/
#include <stdio.h>
int main()
{
  int i,j,k,n;
  char ch='A';
  printf("Enter the size of butterfly: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    ch='A';
    for(j=1;j<=i;j++)
    {
    printf("%c",ch);
    ch++;
    }
    for(k=1;k<=2*(n-i);k++)
    printf(" ");
    for(j=1;j<=i;j++)
    {
    ch--;
    printf("%c",ch);
    }
    printf("\n");
  }
  for(i=n-1;i>0;i--)
  {
    ch='A';
    for(j=1;j<=i;j++)
    {
    printf("%c",ch);
    ch++;
    }
    for(k=1;k<=2*(n-i);k++)
    printf(" ");
    for(j=1;j<=i;j++)
    {
    ch--;
    printf("%c",ch);
    }
    printf("\n");
  }
  return 0;
}