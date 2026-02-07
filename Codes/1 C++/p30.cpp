// Smallest distinct window
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string str = "aabcbcdbca"; // aabcbcdbca ,  aaab ,  geeksforgeeks
    vector<int>count(256,0);
    int first=0, second=0, diff=0, len=str.size();

    // calculate the unique character
    while(first<str.size()){
        if(count[str[first]]==0)
           diff++;
        count[str[first]]=1;
        first++;
    }

    // Reset the vector
    for(int i=0; i<256; i++){
        count[i]=0;
    }
    first = 0; // set at 0

    while(second<str.size()){
        //jabta diff exist karega (mean jabtak zero na ho jaya)
         while(diff && second<str.size()){
            if(count[str[second]]==0) // if new character comes then decrease diff mean one character find it
               diff--;
            
            count[str[second]]++;
            second++;
         }
         len = min(len,second-first);

         //jab tak diff li value one na ban jaya
         while(diff==0){
             len = min(len,second-first);
             count[str[first]]--;         // remove count of string from first

        if(count[str[first]]==0)
                diff++;

            first++;  
         }
    }

     cout<<len;
}