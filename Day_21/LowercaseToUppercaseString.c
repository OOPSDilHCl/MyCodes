#include <stdio.h>
#include <string.h>
void lowerToUpperCase(char str[],int length){
  for(int i=0;i<length;i++)
  {
    if(str[i]>='a' && str[i]<='z'){
      str[i]-=32;
    }
  }
}
int main(){
  printf("Enter the length of string:");
  int n;
  scanf("%d",&n);
  char str[n+1];
  printf("Enter any string:");
  (void)getchar();
  scanf("%[^\n]",str);
  lowerToUpperCase(str,strlen(str));
  printf("New String = %s",str);
  return 0;
}