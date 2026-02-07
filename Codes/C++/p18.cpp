/* print this pattern         1 1 1 1
                              2 2 2 2
                              3 3 3 3 
                              4 4 4 4
                              5 5 5 5  */

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
        cout<<i<<" ";
    }
    cout<<endl;
     }
}