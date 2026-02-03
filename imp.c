#include <stdio.h>
int main()
{
  int x;
  char f;
  scanf("%d %c",&x,&f);
  /*always give space before %c this allows scanf function to skip any amount of whitespaces given by user otherwise if user gives any whitespaces during input then %c will read the space as character that is x=number,f=' ' thus output will become number_ which is wrong 
  E.g.:~ Input 5 a 
         Output 5  because you gave space after 5 thus f is storing whitespace as character thus give space inside the scanf function so that %c skips any amount of whitespace during input.
 E.g.:~ Input 5 a
        Output 5a
                        */
  printf("%d%c",x,f);
}