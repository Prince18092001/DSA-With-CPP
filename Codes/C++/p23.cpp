  /*   Print this pattern    a b c d e f
                             a b c d e f
                             a b c d e f
                             a b c d e f    */

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
        c = 'a'+j;
        
    }
       c='a';
    cout<<endl;
     }
}