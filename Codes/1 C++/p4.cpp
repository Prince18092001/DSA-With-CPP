 // 2D Vector
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // create 2D vector
    int m,n;
    cout<<"Enter number of row: ";
    cin>>m;
    cout<<"Enter number of column: ";
    cin>>n;

    vector<vector<int> >matrix(m, vector<int>(n));

    // Enter value in matrix
    cout<<"Enter value in matrix: ";
    for(int i=0; i<3; i++)
    for(int j=0; j<4; j++)
    cin>>matrix[i][j];
    cout<<endl;
      // print 2D vector
    for(int i=0; i<3; i++)
    for(int j=0; j<4; j++)
    cout<<matrix[i][j]<<" ";
    cout<<endl;
    // print number of row
    cout<<"Row = "<<matrix.size()<<endl;
    // print number of column
    cout<<"column = "<<matrix[0].size();
}