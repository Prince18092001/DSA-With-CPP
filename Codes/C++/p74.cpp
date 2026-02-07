// Reverse Array
#include<iostream>
using namespace std;
int main()
{
    int arr[6]={2,4,5,6,8,9};
   int i=0;
   int j=5;
    while(i<j)
    {
      swap(arr[i],arr[j]);
      i++;
      j--;
    }

    for(i=0;i<=5;i++)
    {
        cout<<arr[i]<<" ";
    }
}