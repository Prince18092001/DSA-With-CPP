  // Continue

#include<iostream>
using namespace std;
int main()
{
    int n, i=1;
    cout<<"Enter a number: ";
    cin>>n;

    for(i=1; i<=n; i++)
    {
        if(i%4==0)
        {
            continue;
        }
        cout<<i<<" ";
    }

}
