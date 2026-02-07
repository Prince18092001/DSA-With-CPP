// print nth Odd number

#include<iostream>
using namespace std;
int main()
{
    int n, i=1;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Odd Number: ";
    while(i<=n)
    {
        
        if(i%2!=0)
        {
            cout<<i<<" ";
        }
        i++;
    }
}