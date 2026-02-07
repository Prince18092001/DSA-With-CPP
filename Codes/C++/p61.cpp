  // Complement of a NUmber

  #include<iostream>
using namespace std;
int main()
{
    int n, rem, ans=0, multi=1, temp, sum=0, multi1=1, rem1;
    cout<<"Enter a Number: ";
    cin>>n;
    temp=n;
    while(n)
    {
    rem=n%2;
    rem=rem^1;   // ^ It is XOR
    n/=2;
    ans=ans + rem*multi;
    multi=multi*10;
    }
    cout<<"Binary Complement of "<<temp<< " : "<<ans;
    while(ans)
    {
        rem1 = ans%10;
        ans = ans /10;
        sum = multi1*rem1 + sum;
        multi1=multi1*2;

    }
    cout<<endl<<"Decimal of Binary Complement: "<<sum;
}