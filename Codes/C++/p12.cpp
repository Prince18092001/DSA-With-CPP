 // Sum of Square of n natural number

#include<iostream>
  using namespace std;
  int main()
  {
    int n,i, sum=0;
    cout<<"Enter a natural number: ";
    cin>>n;
for(i=1; i<=n; i++)
{
    sum=sum+i*i;
}
   cout<<"Sum of sqaure of nautral number = "<<sum;
  }