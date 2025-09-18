#include <stdio.h>
int main()
{
float r,a,c;
printf("Enter radius of circle\n");
scanf("%f",&r);
a=3.14*r*r;
c=2*3.14*r;
printf("Area of circle of radius %.2f is %.2f\n",r,a);
printf("Circumference of circle of radius %.2f is %.2f\n",r,c);
return 0;
}