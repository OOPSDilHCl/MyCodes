#include <iostream>
using namespace std;
int main()
{
 int n;
 cout << "Enter number of elements " << endl;
 cin >> n;
 cout << "Enter the elements:" << endl;
 int a,sum=0;
 for(int i=0;i<n;i++)
 {
   cin >> a;
   sum+=a;
 }
 int num=(n+1)*(n+2)/2;
 cout << "Missing Number = " << num-sum;
 return 0;
}