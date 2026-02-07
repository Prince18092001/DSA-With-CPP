// O(n square) first index of array is empty
#include <iostream>
using namespace std;
int main() {
   int arr[6] = {1,3,5,4,3,6};
   int arr1[7] = {0};
   for(int i=1; i<=6; i++){
       for(int j=0; j<=6; j++){
           if(arr[j]==i){
               arr1[i]++;
           }
       }
   }
   
for(int i=1; i<7; i++){
       if(arr1[i]==0){
           cout<<"missed value"<<i;
       }
       if(arr1[i]==2){
           cout<<"repeated value"<<i;
       }
   }
}