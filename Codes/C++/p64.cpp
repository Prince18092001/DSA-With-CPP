      // Sum of two number using Function
#include<iostream>
using namespace std;

  // Function 1
void sum(int m, int n)        // Function Declare
{
    int ans=m+n;            // Function Define
    cout<<ans;
}

  // Function 2
int multiply(int p, int q)        
{
    int ans=p*q; 
    cout<<ans;           
    return ans;
}

int main()
{
    int a, b;
    cout<<"Enter a Number: ";
    cin>>a;
    cout<<"Enter a Number: ";
    cin>>b;

    sum(a, b);             // Function Call
    cout<<endl;
    multiply(a,b);
}