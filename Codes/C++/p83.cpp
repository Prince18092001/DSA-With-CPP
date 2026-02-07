// Selection Sort       Ascending Order     take int from user
#include<iostream>
using namespace std;
int main()
{
    int arr[1000], n;
    cout<<"Enter the size of an Array: ";
    cin>>n;
    cout<<"Enter Element of an Array: ";
    for(int i=0;i<n;i++)
       cin>>arr[i];
    for(int i=0;i<n-1;i++)
    {  
       int index = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[index])
            {
                index = j;
            }
        }
        swap(arr[i],arr[index]);
    }

    for(int i=0;i<=5;i++)
    {
        cout<<arr[i]<<" ";
    }

}