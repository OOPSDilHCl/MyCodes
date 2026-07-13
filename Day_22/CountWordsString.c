#include <stdio.h>
#include <string.h>
int countWords(char str[],int length){
  int c=0;
  for(int i=0;i<length;i++)
  {
    if((str[i]>='a'&& str[i]<='z')||(str[i]>='A'&& str[i]<='Z'))
    c++;
  }
  return c;
}
int main(){
  printf("Enter the length of string:");
  int n;
  scanf("%d",&n);
  char str[n+1];
  printf("Enter any string:");
  (void)getchar();
  scanf("%[^\n]",str);
  printf("%d words present in string.",countWords(str,strlen(str)));
  return 0;
}