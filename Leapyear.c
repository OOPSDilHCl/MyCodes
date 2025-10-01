#include <stdio.h>
int main()
{
int y;
printf("Enter the year");
scanf("%d",&y);
(y%400==0)||(y%4==0)&&(y%100!=0)?printf("Leap year"):printf("Not a leap year");
return 0;
}

