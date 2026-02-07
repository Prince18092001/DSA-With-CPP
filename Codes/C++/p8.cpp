  // calculate power of any number

#include<iostream>
using namespace std;
int main()
{
    int num,power,i,num1;
    cout<<"Enter the Number: ";
    cin>>num;
    cout<<"Enter the power of Number: ";
    cin>>power;
     num1=num;
     for(i=1; i<power; i=i+1)
     {
        num=num*num1;
     }
     cout<<num;
}