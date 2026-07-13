#include <stdio.h>
#include <string.h>
void my_strrev(char str[],int length){
  for(int i=0;i<length/2;i++)
  {
    char temp=str[i];
    str[i]=str[length-i-1];
    str[length-i-1]=temp;
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
  my_strrev(str,strlen(str));
  printf("The reverse of the string = %s",str);
  return 0;
}