// Find Minimum and maximum element
#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int arr[6] = {4,5,6,2,7,8};
    // Minimum element
    int ans = INT_MAX;
    for(int i=0; i<6; i++)
    {
        if(arr[i]<ans)
          ans=arr[i];
    }
    cout<<ans<<endl;

    // Maximum element
     ans = INT_MIN;
    for(int i=0; i<6; i++)
    {
        if(arr[i]>ans)
          ans=arr[i];
    }
    cout<<ans<<endl;
}