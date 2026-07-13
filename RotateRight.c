#include <stdio.h>
int main()
{
 int k,n;
 printf("Enter the length of array:\n");
 scanf("%d",&n);
 int arr[n];
 printf("Enter the elements→\n");
 for(int i=0;i<n;i++)
 {
   scanf("%d",&arr[i]);
 }
 printf("Enter right rotation:");
 scanf("%d",&k);
 for(int i=0;i<k;i++)
 {
 int an=arr[n-1];
 for(int i=n-1;i>0;i--)
 {
   arr[i]=arr[i-1];
 }
 arr[0]=an;
 }
 for(int i=0;i<n;i++)
 {
   printf("%d ",arr[i]);
 }
 return 0;
}