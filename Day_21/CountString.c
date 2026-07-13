#include <stdio.h>
#include <string.h>
void countstr(char str[],int length){
  int vowel=0,consonant=0;
  for(int i=0;i<length;i++)
  {
    char ch=str[i];
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') vowel++;
    else if(ch>='a' && ch<='z' || ch>='A' && ch<='Z') consonant++;
  }
  printf("%d=Consonant and %d=Vowels",consonant,vowel);
}
int main(){
  printf("Enter the length of string:");
  int n;
  scanf("%d",&n);
  char str[n+1];
  printf("Enter any string:");
  (void)getchar();
  scanf("%[^\n]",str);
  countstr(str,strlen(str));
  return 0;
}