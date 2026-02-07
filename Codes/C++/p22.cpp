        /*    print this pattern   a a a a a
                                   b b b b b
                                   c c c c c
                                   d d d d d    */

#include<iostream>
using namespace std;
int main()
{
    int coloum,row, i, j;
    char c='a';
     cout<<"Enter row: ";
     cin>>row;
     cout<<"Enter coloum: ";
     cin>>coloum;
     for(i=1; i<=row; i++ )
     {
    for(j=1; j<=coloum; j++)
    {
        cout<<c<<" ";
    }
    cout<<endl;
                c = 'a'+i;
     }
}