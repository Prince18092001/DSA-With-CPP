// Fibonacci Series
#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter a number: ";
   cin>>n;
   int arr[1000];
   arr[0]=0;
   arr[1]=1;
   for(int i=2;i<=n-1; i++)
   {
     arr[i]=arr[i-2]+arr[i-1];
   }
   cout<<"nth term "<<arr[n-1];
}