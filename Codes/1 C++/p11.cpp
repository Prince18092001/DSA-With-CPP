// O(nlogn) solve in single/same array 
#include <iostream>
using namespace std;
int main() {
    int repeating = -1, missing=-1;
  int arr[6]={1,2,2,3,4,6};
  //To find repeat value
  for(int i=1; i<6; i++){
      if(arr[i]==arr[i-1]){
          repeating = arr[i];
      }
  }
  //Here use sum formula to find / get missing
  int TotalSum=6*(7)/2;  // n*(n+1)/2
  int actualsum=0;
  for(int i=0; i<6; i++){
      actualsum+=arr[i];
  }
  missing = TotalSum-(actualsum-repeating);
  cout<<"Repeated value: "<<repeating;
  cout<<"Missing value: "<<missing;
}