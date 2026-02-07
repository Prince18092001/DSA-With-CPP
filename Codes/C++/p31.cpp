/* print these pattern              1 
                                  1 2 3
                                1 2 3 4 5
                              1 2 3 4 5 6 7
                            1 2 3 4 5 6 7 8 9     */

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
        for(col=1; col<=2*row-1; col++)      // for print *
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}