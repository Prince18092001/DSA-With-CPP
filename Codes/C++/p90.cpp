// Peak Index in Mountain Array
#include<iostream>
using namespace std;
int Binary(int arr[],int n)
{
  int  start=0, end=n-1, mid;
  while(start<=end)
  {
     mid = start + (end-start)/2;
     if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
     {
       return mid;
       break;
     }
    else if(arr[mid]>arr[mid-1])
    {
        start = mid+1;
    }
    else
    {
       end=mid-1;
    }
  } 
  return -1;
}

int main()
{
    int n, arr[1000];
    cout<<"Enter no. of Array: ";
    cin>>n;
    cout<<"Enter element in array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
cout<<"Peak Index: "<<Binary(arr,n);

}