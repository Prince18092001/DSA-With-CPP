  // Factor of a number

#include<iostream>
using namespace std;
int main()
{
    int n, i=1;
    cout<<"Enter number to find factor: ";
    cin>>n;
    cout<<"Factor of"<<" "<<n<<" "<<"is:"<<" ";
    while(i<=n)
    {
        
        if(n%i==0)
        {
            cout<<i<<" ";
        }
        i++;
    }
}