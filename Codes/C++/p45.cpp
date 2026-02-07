// print sum of nth numbers by using do while loop

#include<iostream>
using namespace std;
int main()
{
    int n, i=1, sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    do{
        sum=sum+i;
       i++;
    }while(i<=n);
    cout<<"Sum = "<<sum<<" ";
}
