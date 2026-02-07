// Complement of a NUmber

  #include<iostream>
using namespace std;
int main()
{
   int n, sum=0, multi=1, rem;
   cout<<"Enter a number: ";
   cin>>n;
     if(n==0)
     {
      cout<<1;
      return 0;
     }
        while(n)
        {
            rem=n%2;
            n/=2;
            rem=rem^1;
            sum=sum+rem*multi;
            multi=multi*2;

        }
        cout<<sum;
}