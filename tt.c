#include <stdio.h>
int main(){
   int n,p,ele;
   printf("Enter the number of elements:");
   scanf("%d",&n);
   printf("Enter the index:");
   scanf("%d",&p);
   printf("Enter the element:");
   scanf("%d",&ele);
   int arr[n+1],t=n;
   for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
   }
   for(int i=n;i>p;i--){
     arr[i]=arr[i-1];
   }
   arr[p]=ele;
   for(int i=0;i<=n;i++){
     printf("%d ",arr[i]);
   }
   return 0;
}