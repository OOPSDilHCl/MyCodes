#include <stdio.h>
#include <string.h>
void removeSpaces(char str[],int length){
  char newstr[length];
  for(int i=0,j=0;i<length;i++)
  {
    if(str[i]!=' '){
       if(str[i]=='\0')
        break;
    newstr[j]=str[i];
    j++;
    }
  }
  printf("%s",newstr);
}
int main(){
  printf("Enter the length of string:");
  int n;
  scanf("%d",&n);
  char str[n+1];
  printf("Enter any string:");
  (void)getchar();
  scanf("%[^\n]",str);
  removeSpaces(str,strlen(str));
  return 0;
}