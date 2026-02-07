// Book Allocation
#include<iostream>
using namespace std;
int BoookAllocation(int arr[], int n, int m)
{
    if(m>n)
    {
        return -1;
    }

    int start=0, end=0, mid, ans;
    for(int i=0; i<n; i++)
    {
        start=max(start,arr[i]);
        end+=arr[i];
    }
    while(start<end)
    {
        mid= start+(end-start)/2 ;
        int page=0, count=1;
        for(int j=0; j<n; j++)
        {
            page+=arr[j];
            if(page>mid)
            {
                count++;
                page=arr[j];

            }
        }
        if(count<=m)
            {
                ans=mid;
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
    }
    return ans;
}

int main()
{
    int n, arr[1000], m;
    cout<<"Enter no. of arr: ";
    cin>>n;
    cout<<"Enter element in arry: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter how many person: ";
    cin>>m;

    cout<<"Max Page: "<<BoookAllocation(arr, n, m);
}