  // Sum Of Digit in a Single Digit

#include<iostream>
using namespace std;
int main()
{
    int num, rem, sum=0;
    cout<<"Enter a Number: ";
    cin>>num;
      while(num>9)
        {
            int rem, sum=0;
            while(num>0)
            {
                rem=num%10;
                num/=10;
                sum+=rem;
            }
            num=sum;
        }
     cout<<"Sum Of Digit in a Single Digit: "<<num;
}