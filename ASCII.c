#include <stdio.h>
int main()
{
  printf("ASCII values:");
  for(int ch='A';ch<='Z';ch++)
  printf(" %c→%d \n",ch,ch);
  for(int ch='a';ch<='z';ch++)
  printf(" %c→%d \n",ch,ch);
  for(char ch='0';ch<='9';ch++)
  printf(" %c→%d...\n",ch,ch);
  return 0;
}