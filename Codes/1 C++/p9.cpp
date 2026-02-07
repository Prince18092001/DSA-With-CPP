// O(n) first index of array is empty
#include <iostream>
using namespace std;
int main() {
   int arr[6] = {1,3,5,4,3,6};
   int count[7] = {0};
   for(int i=0; i<=5; i++){
       count[arr[i]]++;
   }
   
   // missed
   for(int i=1; i<7; i++){
       if(count[i]==0){
           cout<<"Missed Value: "<<i;
           break;
       }
   }
   //repeat
   for(int i=1; i<7; i++){
       if(count[i]==2){
           cout<<"Repeated Value: "<<i;
           break;
       }
   }
}