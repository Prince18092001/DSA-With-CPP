// Three Sum using binary search assume two value/number

#include<iostream>
using namespace std;
void threesum(int arr[], int n, int x){
    int find=0;
     for(int i=0; i<n-2; i++){
        for(int j=i+1; j<n-1; j++){
            find= x-arr[i]-arr[j];
             int start=j+1, end=n-1, mid=0;
             while(start<end){
                mid=(start+end)/2;
                if(arr[mid]==find){
                     cout << "Triplet found: " << arr[i] << ", " << arr[j] << ", " << arr[mid] << endl;
                    return;
                }
                else if(arr[mid]<find)
                      start=mid+1;
                else
                    end=mid-1;
             }


        }
     }
     cout << "No triplet found." << endl;
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

    threesum(arr,n,x);
}
