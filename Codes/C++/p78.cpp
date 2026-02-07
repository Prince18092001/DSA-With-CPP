//Print array using function
#include<iostream>
using namespace std;
void fun(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
      cout<<a[i]<<" ";
    }
}
int main()
{
  int arr[5] = {2,4,5,6,8};
  fun(arr,5);
}