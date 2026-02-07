      //Binary to Octal conversion
#include<iostream>
using namespace std;
int main()
{
    int num, remainder, remainder1, num1, ans=0, multi=1, ans1=0, multi1=1;
    cout<<" Enter Binary Number: ";
    cin>>num;

    while(num>0)
    {
        remainder = num%10;
        num = num /10;
        ans = multi*remainder + ans;
        multi=multi*2;

    }
    
      num1=ans;
    while(num1>0)
    {
        remainder1 = num1%8;
        num1 = num1 /8;
        ans1 = remainder1*multi1 + ans1;
        multi1=multi1*10;

    }
    cout<<"octal Number: "<<ans1;
           
}