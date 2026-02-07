// convert alphabet small to large

#include<iostream>
using namespace std;
char convert(char name)
{
    char ans = name - 'a' + 'A';
    return ans;
}

int main()
{
    char name;
    cout<<"Enter any alphabet in small letter: ";
    cin>>name;

    cout<<convert(name);
}