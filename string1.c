#include <stdio.h>

int my_strlen(char st1[])
{
    int i=0;
    while(st1[i]!='\0')
    i++;
    return i;
}

int my_strcmp(char st1[],char st2[])
{
  int i=0;
  while(st2[i]!='\0' && st1[i]!='\0' && st1[i]==st2[i])
    i++;
  return st1[i]-st2[i];//returns ascii difference.
}

void my_strrev(char st1[])
{
    int len=my_strlen(st1);
    for(int i=0;i<len/2;i++)
    {
        char temp=st1[i];
        st1[i]=st1[len-i-1];
        st1[len-i-1]=temp;
    }
}

void my_strcpy(char st2[],char st1[])
{
    int i=0;
    while(st1[i]!='\0')
    {
        st2[i]=st1[i];
        i++;
    }
    st2[i]='\0';
    return;
}

int main()
{
  int n;
  printf("Enter the length of the string:");
  scanf("%d",&n);
  char str1[n+1];
  printf("Enter the string:");
  (void)getchar();/*takes single input character for no error bcz taking string input will take empty space as string.*/ 
  scanf("%[^\n]",str1);
  int len=my_strlen(str1);
  printf("The length of the string=%d and the my_strlen function found length to be=%d.\n",n,len);
  char str2[n+1];
  my_strcpy(str2,str1);
  printf("Copy of string=%s\n",str2);
  my_strrev(str1);
  printf("The reversed string=%s",str1);
  my_strcpy(str1,"Hellr");/*You cannot initialize string or array after declaration so we just copy string.*/
  my_strcpy(str2,"Hello");
  printf("\nOn comparing the strings: %d\n",my_strcmp(str1,str2));
  return 0;
}