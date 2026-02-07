//o(1) time complexity me
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter element in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //Decrease 1 by each element of array
    for(int i=0;i<n;i++){
        arr[i]--;
    }
    
    for(int i=0;i<n;i++){
        arr[arr[i]%n]+=n;
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]/n==0){
          cout<<"Missing: "<<i+1;
        }
        if(arr[i]/n==2){
          cout<<"Repeating: "<<i+1;
    }
}
}