#include <stdio.h>
#include <string.h>
int main()//Uppercase and no of words.
{
  int c=0;
  char str[]="H e l l o";
  for(int i=0;str[i]!='\0';i++)
  {
    if(str[i]==' ')
    c++;
    if(str[i]>='a' && str[i]<='z')
    {
      str[i]-=32;
    }
  }
  printf("%s",str);
  printf("\nNumber of words=%d",c+1);
  return 0;
}