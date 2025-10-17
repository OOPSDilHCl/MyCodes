#include <stdio.h>
int main()
{
int num;
printf("Enter a number: ");
scanf("%d",&num);
if(num<=1)
  {
   printf("%d is not a prime number",num);
   return 0;
  }
for(int i=2;i*i<=num;i++)
 {
  if(num%i==0)
  {
   printf("%d is not a prime number",num);
   return 0;
  }
 }
 printf("%d is a prime number",num);
 return 0;
}
/*
   The code in starting had prime variable which used to  count 2 divisibles 1 and number itself that variable got removed also loop was from 1→n.
    Why the loop runs from 2 → n/2 at first, and later optimized to 2 → √n (i*i <= n):

  - We start checking from 2 instead of 1 because:
      Every number is divisible by 1, so checking 1 adds no new information.
      A prime number is one that has exactly two divisors: 1 and itself.

  - At first, the loop was written as:  for (i = 2; i <= n/2; i++)
      This works correctly, because no number greater than n/2 (except n itself)
      can divide n evenly. For example:
          20 ÷ 11 20 ÷ 12   ...   20 ÷ 10 (last valid check)
      But this method is slow for large numbers, since it checks many unnecessary values.

  - Then we optimized it to:  for (i = 2; i * i <= n; i++)
      Why? Because factors always appear in *pairs*:
          Example for 36:
              1 × 36
              2 × 18
              3 × 12
              4 × 9
              6 × 6
              9 × 4
              12 × 3
              18 × 2
              36 × 1
      Notice that after 6 (√36), the factor pairs start repeating in reverse.
      This means that if no number up to √n divides n, then no larger one will either.

  - Mathematically:
        If i <= √n  ⇒  i² <= n
        So, using (i * i <= n) is equivalent to (i <= sqrt(n))
        but faster and simpler — avoids calling sqrt() repeatedly.
      In short:
      Start from 2 because 1 divides all numbers.
      End at √n because factor pairs repeat after the square root.
      Using i*i <= n makes the check both correct and efficient and no need of <math.h> header file.
*/