// Min value in Rotated Array
#include<iostream>
using namespace std;
int Binary(int arr[],int n)
{
  int  start=0, end=n-1, mid, ans=arr[0];
  while(start<=end)
  {
    mid=start+(end-start)/2;
    if(arr[mid]>=arr[0])        // left side sort
    {
        start = mid+1;
    }
    else                         // right side sort
    {
        ans=arr[mid];
        end=mid-1;
    }
  } 
  return ans;
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
cout<<"Min value Index: "<<Binary(arr,n);

}