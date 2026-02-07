  /* print this pattern            *
                                  **
                                 ***
                                ****
                               *****   */

#include<iostream>
using namespace std;
int main()
{
    int n, row, col;
    cout<<"Enter number of row: ";
    cin>>n;

    for(row=1; row<=n; row++)          // for no. of row
    {
        for(col=1; col<=n-row; col++)    // for space print
        {
            cout<<" ";
        }
        for(col=1; col<=row; col++)      // for * print
        {
            cout<<"*";
        }
        cout<<endl;
    }
}