// Find the occurrence of the number
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
    cout<<i+1<<"  "<<arr[i]/n<<endl;
    }
}