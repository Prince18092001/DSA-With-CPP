      // Prime or not  &  Factorial
#include<iostream>
using namespace std;

// prime or not
int prime(int num)
{
    if(num<2)
    {
      cout<<"Not prime number";
      return 0;
    }

    for(int i=2; i<num; i++)
    {
        if(num%i==0)
        {
          cout<<"Not a prime";
          return 0;
        }
    }
    cout<<"Prime Number";
    return 1;
}

// Factorial
int fact(int num)
{
    int ans=1;
    for(int i=1; i<=num; i++)
    ans = ans*i;
    return ans;
}

int main()
{
    int n, m;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter a number: ";
    cin>>m;

     prime(n);      // function call
     cout<<endl;
     cout<<fact(n)<<endl;       // function call
     prime(m);
     cout<<endl;
     cout<<fact(m);
}