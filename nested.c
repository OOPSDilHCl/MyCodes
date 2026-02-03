#include <stdio.h>
#include <string.h>
int main()
{
  /*
  A 
  AB 
  ABC
  ABCD
  ABCDE
  */
  char test[10];
  do{
  char ch='A';
  for(int i=1;i<=5;i++)
  { 
    ch='A';
    for(int j=1;j<=i;j++)
    {
      printf("%c",ch);
      ch++;
    }
    printf("\n");
  }
  printf("Do you want to continue:- Then type Yes and No to discontinue.");
  scanf("%s",test);
  }
  while(strcmp(test,"yes")==0);
  return 0;
}