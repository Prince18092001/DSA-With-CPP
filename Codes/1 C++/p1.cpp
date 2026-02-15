// maxSubarraySum
#include<iostream>
#include <vector>
#include <limits.h>

using namespace std;
int maxSubarraySum(vector<int>arr, int n) {
    // Your code here

    int maxi =INT_MIN, preffix=0;
    for(int i=0; i<n; i++){
        preffix += arr[i];
        maxi= max(maxi, preffix);
        if(preffix<0)
        {
            preffix=0;
        }
    }
    return maxi;
}
int main ()
{
    int n;
    cout<<"Enter the size of an vector: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the element in vector: ";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    cout<<maxSubarraySum(v,n);
}