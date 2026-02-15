// do while loop
// print nth numbers by do while loop

#include<iostream>
using namespace std;
int main()
{
    int n, i=1;
    cout<<"Enter a number: ";
    cin>>n;
    do{
        cout<<i<<" ";
       i++;
    }while(i<=n);
}
