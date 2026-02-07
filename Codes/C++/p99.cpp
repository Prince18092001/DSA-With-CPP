// Divide array in 2 subarray with equal sum
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool divide(vector<int>arr){
    int total_sum=0, prefix=0, n=arr.size();
    for(int i=0; i<n; i++){
        total_sum += arr[i];
    }
    for(int j=0; j<n; j++){
        prefix += arr[j];
       
        if(total_sum==2*prefix){
            return 1;
        }
    }
    return 0;
}

int main() {
    int n;
    cout<<"Enter the size of an vector: ";
    cin>>n;
    vector<int> v(n);
    cout<<"Enter the element in vector: ";
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
 cout<<divide(v);
    return 0;
}