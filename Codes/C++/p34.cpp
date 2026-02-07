/* print this pattern              * * * * * * * * *
                                     * * * * * * *
                                       * * * * *
                                         * * *
                                           *                  */

#include<iostream>
using namespace std;
int main()
{
    int n, row, col;
    cout<<"Enter a row: ";
    cin>>n;
    for(row=n; row>=1; row--)      // for row
    {
        for(col=1; col<=n-row; col++)      // for print space
        {
            cout<<"  ";
        }
        for(col=1; col<=2*row-1; col++)      // for print *
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}