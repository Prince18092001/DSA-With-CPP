    /*  print this pattern   5 4 3 2 1
                             5 4 3 2 1
                             5 4 3 2 1
                             5 4 3 2 1   */

#include<iostream>
using namespace std;
int main()
{
    int coloum,row, i, j;
     cout<<"Enter row: ";
     cin>>row;
     cout<<"Enter coloum: ";
     cin>>coloum;
     for(i=1; i<=row; i++ )
     {

    for(j=coloum; j>=1; j--)
    {
        cout<<j<<" ";
    }
    cout<<endl;
     }
}