// swap two number by making function
#include<iostream>
using namespace std;

// Swap function
void swap(int &x , int &y)   // pass by reference
{
    int z;
    z=x;
    x=y;
    y=z;

}

int main()
{
    int a, b;
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;

 swap(a,b);
    cout<<"a = "<<a;
    cout<<endl;
    cout<<"b = "<<b;
}