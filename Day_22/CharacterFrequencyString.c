#include <stdio.h>
#include <string.h>
int charFreq(char str[],int length,char ch){
  int freq=0;
  for(int i=0;i<length;i++){
  if(str[i]>='A'&&str[i]<='Z'){
    str[i]+=32;
  }
   if(str[i]==ch) freq++;
  }
  return freq;
}
int main(){
  printf("Enter the length of string:");
  int n;
  scanf("%d",&n);
  char str[n+1],ch;
  printf("Enter any string:");
  (void)getchar();
  scanf("%[^\n]",str);
  printf("Enter the character:");
  (void)getchar();
  scanf("%c",&ch);
  printf("%d times character %c appeared.",charFreq(str,strlen(str),ch),ch);
  return 0;
}