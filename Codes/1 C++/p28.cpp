// Factorial of Large Number
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    vector<int>ans(1,1);

    while(n>1){
        int carry = 0, result, size = ans.size();

        for(int i=0; i<size; i++){   // start from 0 position of vector because after become more value then it store to increse size of vector
            result = ans[i]*n + carry;
            ans[i] = result%10;
            carry = result/10;
        }
        while(carry){
            ans.push_back(carry%10); // if cell of vector become full then it create double size new vector to insert element
            carry /= 10;            // if carry become two digit then insert in vector different cell
        }
       n--;
    }
    
    reverse(ans.begin(),ans.end());
    for(int i=0; i<ans.size(); i++){
          cout<<ans[i];
    }
}