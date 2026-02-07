// Power of Two
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number: ";
    cin>>n;
     if(n<1)
     {
        cout<<"Not in power of Two";
        return 0;
     }
        while(n!=1)
        {
            if(n%2==1)
            {  
            cout<<"Not in power of Two";
            return 0;
            }
            n/=2;
        }
        cout<<"Number is power of two";
}