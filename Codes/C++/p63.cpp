// Function
// Sum of two number using Function
#include<iostream>
using namespace std;

  // Function 1
int sum(int m, int n)        // Function Declare
{
    int ans=m+n;            // Function Define
    return ans;
}

  // Function 2
int multiply(int p, int q)        
{
    int ans=p*q;            
    return ans;
}

int main()
{
    int a, b;
    cout<<"Enter a Number: ";
    cin>>a;
    cout<<"Enter a Number: ";
    cin>>b;

    cout<<sum(a, b);             // Function Call
    cout<<endl;
   int pk=multiply(a,b);
   cout<<pk;
}