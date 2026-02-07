  // Decimal to Octal

#include<iostream>
using namespace std;
int main()
{
    int num, remainder, ans=0, multi=1;
    cout<<" Enter Decimal Number: ";
    cin>>num;

    while(num>0)
    {
        remainder = num%8;
        num = num /8;
        ans = remainder*multi + ans;
        multi=multi*10;

    }
    cout<<"Octal Number: "<<ans;
           
}