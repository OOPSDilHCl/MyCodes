#include <iostream>
using namespace std;
int main()
{
 int n;
 cout << "Enter the index of Fibonacci number: " << endl;
 cin >> n;
 int i=1,fibo1=1,fibo2=0;
 while(i<=n)
 {
   int temp=fibo2;
   fibo2 = fibo1+fibo2;
   fibo1=temp;
   i++;
 }
 cout << fibo2 << endl;
 return 0;
}