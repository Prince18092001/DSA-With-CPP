/*print this pattern        A
                           AB
                          ABC
                         ABCD
                        ABCDE    */


#include<iostream>
using namespace std;
int main()
{
    int n, row;
    char col;
    cout<<"Enter number of row: ";
    cin>>n;

    for(row=1; row<=n; row++)          // for no. of row
    {
        for(col=1; col<=n-row; col++)    // for space print
        {
            cout<<" ";
        }
        for(col='A'; col<='A'+row-1; col=col+1)      // for * print
        {
            cout<<col;
        }
        cout<<endl;
    }
}