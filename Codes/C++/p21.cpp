        /*  print this pattern    1 4 9 16 25 36
                                  1 4 9 16 25 36 
                                  1 4 9 16 25 36
                                  1 4 9 16 25 36     */

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
        cout<<j*j<<" ";
    }
    cout<<endl;
     }
}