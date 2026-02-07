    // Reverse of a number
#include<iostream>
using namespace std;
int main()
{
    int num, rem, ans=0;
    cout<<"Enter a number: ";
    cin>>num;

    while(num!=0)
    {
        rem=num%10;
        num/=10;
        ans=ans*10+rem;
    }
    cout<<"Reverse Number: "<<ans;
}