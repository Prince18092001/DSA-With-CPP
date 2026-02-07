        /*  Print this pattern  1 2 3 4 5 6 7 8
                                1 2 3 4 5 6 7 8 
                                1 2 3 4 5 6 7 8
                                1 2 3 4 5 6 7 8    */

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

    for(j=1; j<=coloum; j++)
    {
        cout<<j<<" ";
    }
    cout<<endl;
     }
}