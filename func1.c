#include <stdio.h>
  int largest(int a,int b,int c);
  int main(){
    int num1,num2,num3;
    printf("Enter the 3 numbers:");
    scanf("%d%d%d",&num1,&num2,&num3);
    printf("The greatest value is :%d",largest(num1,num2,num3));
  }
  int largest(int a,int b,int c){
    return a>b?(a>c?a:c):(b>c?b:c);
  }