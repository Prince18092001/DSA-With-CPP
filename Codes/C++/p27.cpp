/* print thid pattern        1
                            21
                           321
                          4321
                         54321  */

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
        for(col=row; col>=1; col--)      // for * print
        {
            cout<<col;
        }
        cout<<endl;
    }
}