#include <stdio.h>
#include <string.h>
int my_strlen(char str[]){
  int i=0;
  while(str[i]!='\0')
  {
    i++;
  }
  return i;
}
int main(){
  printf("Enter the length of string:");
  int n;
  scanf("%d",&n);
  char str[n+1];
  printf("Enter any string:");
  (void)getchar();
  scanf("%[^\n]",str);
  int len=my_strlen(str);
  printf("The length of the string = %d",len);
  return 0;
}