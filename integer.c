#include <stdio.h>
int main()
{
  float f;
  printf("Enter a floating point number: ");
  scanf("%f",&f);
  int n=f;/*implicit type conversion or type promotion,compiler automatically converts*/
  int num=(int)f;/*explicit type conversion or type casting, done by programmer*/
  printf("\nImplicit-%d\tExplicit-%d",n,num);
  printf("\nThe rightmost digit of integral part of the number is %d",num%10);
  while(num>9)
  {
    num=num/10;
  }
  printf("\nThe leftmost digit of the integral part of the number is %d",num);
  return 0;
}