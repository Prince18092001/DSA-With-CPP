// Array
#include<iostream>
using namespace std;
int main()
{
  int arr[5] = {2,4,6,9,10};
  for(int i=0; i<5; i++)
      cout<<arr[i]<<" ";
  
  cout<<endl;

  int arry[] = {2,4,6,9,10,11,4,5,6};
  for(int i=0; i<9; i++)
      cout<<arry[i]<<" ";

  cout<<endl;

  int ar[6] = {0};
  for(int i=0; i<6; i++)
      cout<<ar[i]<<" ";

    cout<<endl;
  
  int p[5] = {2,5,6,9,10};
    cout<<p[1]<<endl;

    cout<<sizeof(p)<<endl;
    // no. of element present in array
    cout<<sizeof(p)/sizeof(p[0]);        // any index we can take beacuse each has 4 contain 4 byte
     
}