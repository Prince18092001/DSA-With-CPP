// Find first and last position of Element in sorted Array
#include<iostream>
using namespace std;
int Binary_search(int arr[],int n,int key)
{
    int start=0, end=n-1, mid, first=-1, last=-1;
    while(start<=end)
    {
        // mid ko find karo
        mid = (start+end)/2;
        //arr[mid]==key
        if(arr[mid]==key)
        {
            first = mid;
            end=mid-1;
        }
        //arr[mid]<key
        else if(arr[mid]<key)
        {
        start=mid+1;
        }//arr[mid]>key
        else{
            end=mid-1;
        }
    }
cout<<"First: "<<first<<endl;

    start=0, end=n-1;
    while(start<=end)
    {
        // mid ko find karo
        mid = (start+end)/2;
        //arr[mid]==key
        if(arr[mid]==key)
        {
            last = mid;
            start=mid+1;
            
        }
        //arr[mid]<key
        else if(arr[mid]<key)
        {
        start=mid+1;
        }//arr[mid]>key
        else{
            end=mid-1;
        }
    }
cout<<"Last: "<<last<<endl;
 return -1;
}

int main()
{
   int arr[1000],n, key;
   cout<<"Enter number of element in array: ";
   cin>>n;
   cout<<"Enter element in array: ";
   for(int i=0; i<n; i++)
   {
    cin>>arr[i];
   }
   cout<<"Enter the Key: ";
   cin>>key;

   cout<<Binary_search(arr,n,key);

}