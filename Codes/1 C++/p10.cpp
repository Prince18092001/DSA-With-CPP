// O(n) first index of array is no empty
#include <iostream>
using namespace std;
int main() {
   int arr[6] = {1,3,5,4,3,6};
   int count[6] = {0};
   for(int i=0; i<=5; i++){
       count[arr[i]-1]++;
   }
   // missed
   for(int i=0; i<6; i++){
       if(count[i]==0){
           cout<<"Missed Value: "<<i+1;
           break;
       }
   }
   //repeat
   for(int i=0; i<6; i++){
       if(count[i]==2){
           cout<<"Repeated Value: "<<i+1;
           break;
       }
   }
   
}