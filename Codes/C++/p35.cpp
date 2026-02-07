/* Print this pattern            * * * * * * * * 
                                 * * *     * * * 
                                 * *         * * 
                                 *             * 
                                 *             * 
                                 * *         * * 
                                 * * *     * * * 
                                 * * * * * * * *           */

#include<iostream>
using namespace std;
int main()
{
    int n,row, col;
    cout<<"Enter a number: ";
    cin>>n;
    for(row=n; row>=1; row--)         // for row
    {
        for(col=1; col<=row; col++)        // for star
        {
            cout<<"*"<<" ";
        }
        for(col=1; col<=2*n-2*row; col++)     // for space
        {
            cout<<"  ";
        }
        for(col=1; col<=row; col++)      // for star
        {
            cout<<"*"<<" ";;
        }
        cout<<endl;
    }

    for(row=1; row<=n; row++)                 // for row
    {
        for(col=1; col<=row; col++)           // for star
        {
            cout<<"*"<<" ";
        }
        for(col=1; col<=2*n-2*row; col++)        // for space
        {
            cout<<"  ";
        }
        for(col=1; col<=row; col++)            //for star
        {
            cout<<"*"<<" ";;
        }
        cout<<endl;
    }
}