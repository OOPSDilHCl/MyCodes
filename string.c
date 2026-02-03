#include <stdio.h>
int main()
{
  char arr[]={'A','B','C','&'};/*you have to add \0 at the end computer will not add.*/
  char arr1[]={'A','B','C','&','\0'};
  char str[]="Hello World!";/*Computer adds null character at last automatically no need of writing it like str1*/
  char str1[]="Hello World\0";
  for(int i=0;i<5;i++)
  printf("%c ",arr[i]);
  printf("\n");
  int i=0;
  while(arr1[i]!='\0')
  {
    printf("%c ",arr1[i]);
    i++;
  }
  printf("\n");
  i=0;
  while(str[i]!='\0')
  {
    printf("%c",str[i]);
    i++;
  }
  return 0;
}