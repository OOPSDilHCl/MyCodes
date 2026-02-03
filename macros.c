#include <stdio.h>
#define PI 3.14159265358979
#define Area(r) (PI*(r)*(r))
#define Display printf("%.12f",Area(r));
#define End return 0;
#define Begin int main()
#define print printf(
#define And && 
#define Or ||
#define False "\nIncorrect statement");
#include "Circumference.txt"
Begin
{
  int r=10;
  Display
  /*Note→ You cannot use macros inside  a string. For example-"Area=Area(r)"*/
  print"Area = Area(r)");
  if(!((1>2)And(2<1)))
  print False
  print "%f",CIRCUM(r));
  End 
}