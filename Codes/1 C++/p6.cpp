// Rotate Matrix By K Time
#include<iostream>
using namespace std;
int rotate90(int matrix[100][100],int n){
     //transpose matrix
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++)
            swap(matrix[i][j],matrix[j][i]);
        }
        //reverse matrix
        for(int i=0; i<n; i++){
            int start=0, end=n-1;
            while(start<end){
                swap(matrix[i][start],matrix[i][end]);
                start++;
                end--;
            }
        }
}
int main(){
    int matrix[100][100], n, k;
   cout<<"Enter size of matrix: ";
   cin>>n;
   cout<<"Enter element in matrix: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin>>matrix[i][j];
        }
    }
    
    cout<<"Enter how many times rotate: ";
    cin>>k;
    while(k%4){
        rotate90(matrix,n);
        k--;
    }

    cout<<"Rotated Matrix is:"<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}