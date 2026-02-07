  // sum of a digit

#include<iostream>
using namespace std;
int main()
{
    int num, remainder=0, sum=0;
    cout<<"Enter a Number: ";
    cin>>num;
    
    while(num>0)
    {
        remainder=num%10;
        num=num/10;
        sum=sum+remainder;
    }
    cout<<"Sum of a Digit: "<<sum;
}