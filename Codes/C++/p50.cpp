// Binary to Decimal Conversion

#include<iostream>
using namespace std;
int main()
{
    int num, remainder, ans=0, multi=1;
    cout<<" Enter Binary Number: ";
    cin>>num;

    while(num>0)
    {
        remainder = num%10;
        num = num /10;
        ans = multi*remainder + ans;
        multi=multi*2;

    }
    cout<<"Decimal Number: "<<ans;
           
}