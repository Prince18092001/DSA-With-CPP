// Search in Rotated Array
#include<iostream>
using namespace std;
int Binary(int arr[],int n, int target)
{
  int  start=0, end=n-1, mid;
  while(start<=end)
  {
    mid=start+(end-start)/2;
    if(arr[mid]==target)
    {
            return mid;
            break;
    }
    else if(arr[mid]>=arr[0])        // left side sort
    {
      if(arr[start]<target && arr[mid]>target)
      {
        end=mid-1;
      }
      else
      {
        start=mid+1;
      }
    }
    else                         // right side sort
    {
        if(arr[mid]<target && arr[mid]>target)
        {
          start=mid+1;
        }
        else
        {
          end=mid-1;
        }
    }
  } 
  return -1;
}

int main()
{
    int n, arr[1000],target;
    cout<<"Enter no. of Array: ";
    cin>>n;
    cout<<"Enter element in array: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter a target: ";
    cin>>target;

cout<<"Index: "<<Binary(arr,n,target);

}