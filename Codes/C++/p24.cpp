 /*     Print this pattern      1  2  3  4  5  
                                6  7  8  9  10  
                                11  12  13  14  15  
                                16  17  18  19  20    */

#include<iostream>
using namespace std;
int main()
{
    int coloum,row, i, j, count=1;
     cout<<"Enter row: ";
     cin>>row;
     cout<<"Enter coloum: ";
     cin>>coloum;
     for(i=1; i<=row; i++ )
     {
    for(j=1; j<=coloum; j++)
    {
       
      cout<<count<<"  ";
      count++;
        
    }
    cout<<endl;
     }
}