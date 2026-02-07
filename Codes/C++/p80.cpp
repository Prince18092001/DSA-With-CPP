// Sort       Descending Order
#include<iostream>
using namespace std;
int main()
{
    int arr[6]={5,1,4,3,9,7};
    for(int i=1; i<=5; i++)
    {
      for(int j=0; j<=5; j++)
      {
        if(arr[i]>arr[j])
        {
            swap(arr[i],arr[j]);
        }
      }
    }

    for(int i=0;i<=5;i++)
    {
      cout<<arr[i]<<" ";
    }

}