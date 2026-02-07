  // Print nth turm of fibonacci series

#include<iostream>
using namespace std;
int main()
{
    int last=0,previous=1,n,i,current;
    cout<<"Enter nth term of fibonacci series: ";
    cin>>n;
    cout<<last<<"  "<<previous<<"  ";
    for(i=3; i<=n; i++)
    {
        current=last+previous;
        cout<<current<<"  ";

        last=previous;
        previous=current;
    }

}