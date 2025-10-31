#include <stdio.h>
int main()
{
  char ch;
printf("Enter a character: ");
  scanf("%c",&ch);
  if(ch>='A' && ch<='Z')
printf("Uppercase albhabet letter %c",ch);
  else if(ch>='a' && ch<='z')
printf("Lowercase alphabet letter %c",ch);
  else if(ch>='0' && ch<='9')
printf("%c is a digit",ch);
  else
printf("%c is a special character",ch);
return 0;
}