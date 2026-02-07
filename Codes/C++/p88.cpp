// Search Insert position
#include<iostream>
using namespace std;
int Binary_search(int arr[], int n, int insert)
{
   int start=0, end=n-1, mid, index;
while(start<=end)
{
   mid=start+(end-start)/2;
   
   if(arr[mid]==insert)
   {
    index=mid;
    break;
   }
   else if(arr[mid]<insert)
   {
    start=mid+1;
   }
   else{
    index=mid;
    end=mid-1;
   }
}
return index;
}
int main()
{
    int arr[1000], n, insert;
    cout<<"Enter no. of element in array: ";
    cin>>n;
    cout<<"Enter Elements in arry: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Insert element: ";
    cin>>insert;

    cout<<Binary_search(arr,n,insert);
}