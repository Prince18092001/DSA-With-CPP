  // Pallindrome

  #include<iostream>
using namespace std;
int main()
{
    int num, rem, ans=0, temp;
    cout<<"Enter a number: ";
    cin>>num;
     temp=num;
    while(num!=0)
    {
        rem=num%10;
        num/=10;
        ans=ans*10+rem;
    }
     if(temp==ans)
     cout<<"Pallindrome";
     else
     cout<<"Not a Pallindrome";
}