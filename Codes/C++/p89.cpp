// Sqrt(X)
#include<iostream>
using namespace std;
int Binary_search(int x)
{
    int start=1, end = x, mid, ans;
    while(start<=end)
    {
        mid=start+(end-start)/2;
    if(mid*mid==x)
    {   ans=mid;
         break;
    }
    else if(mid*mid<x)
    {
        ans=mid;
        start=mid+1;
    }
    else
    {
       end=mid-1;
    }
    }
    return ans;
}
int main()
{
    int x;
  cout<<"Enter Number to find square root: ";
  cin>>x;

  cout<<Binary_search(x);
}