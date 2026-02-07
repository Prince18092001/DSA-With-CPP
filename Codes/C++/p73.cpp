// Search Element
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int index=-1;
    int arr[6] = {2,4,5,7,8,9};
    for(int i=0;i<6; i++)
    {
      if(arr[i]==n)
      {
        index=i;
        cout<<index;
        break;
      }
    }
    
}