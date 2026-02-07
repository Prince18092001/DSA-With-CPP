//Three Sum using binary search assume one value/number
#include<iostream>
using namespace std;

bool hasTripletSum(int arr[], int n, int target) {
    // code here
    // sort the array
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                // Manual swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
   // three sum
    for(int i=0; i<n-2; i++){
        int ans=target-arr[i];
        int start=i+1, end=n-1;
        while(start<end){
            if(arr[start]+arr[end]==ans)
            return 1;
            else if(arr[start]+arr[end]>ans)
            end--;
            else
            start++;
        }
    }
    return 0;
}

int main(){
    int arr[100], n=0, x;
    cout<<"Enter size of array: ";
    cin>>n;
    cout<<"Enter element in array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter yor target Number: ";
    cin>>x;
    cout<<hasTripletSum(arr,n,x);
}