         // OR

/* print this pattern                       1
                                          1 2 1
                                        1 2 3 2 1 
                                      1 2 3 4 3 2 1
                                    1 2 3 4 5 4 3 2 1      */

#include<iostream>
using namespace std;
int main()
{
    int n, row, col;
    cout<<"Enter a row: ";
    cin>>n;
    for(row=1; row<=n; row++)      // for row
    {
        for(col=1; col<=n-row; col++)      // for print space
        {
            cout<<"  ";
        }
        for(col=1; col<=row-1; col++)      // for print *
        {
            cout<<col<<" ";
        }
        for(col=row; col>=1; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}