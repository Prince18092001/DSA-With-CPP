// swap two number by making function       Function Overloading
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
void swap(float &x ,float &y)   // pass by reference
{
    float z;
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
    cout<<"b = "<<b<<endl;

    float c, d;
    cout<<"c = ";
    cin>>c;
    cout<<"d = ";
    cin>>d;

 swap(c,d);
    cout<<"c = "<<c;
    cout<<endl;
    cout<<"d = "<<d;
}