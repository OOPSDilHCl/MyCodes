#include <stdio.h>
#include <string.h>
int checkPalindrome(char str[],int length){
  for(int i=0;i<length/2;i++)
  {
    if(str[i]!=str[length-i-1]){
      return 0;
    }
  }
  return 1;
}
int main(){
  printf("Enter the length of string:");
  int n;
  scanf("%d",&n);
  char str[n+1];
  printf("Enter any string:");
  (void)getchar();
  scanf("%[^\n]",str);
  if(checkPalindrome(str,strlen(str)))
  printf("%s is Palindrome.",str);
  else
  printf("%s is not Palindrome.",str);
  return 0;
}