// ADD Strings
// when n1 >= n2
#include<iostream>
#include <algorithm>
using namespace std;
int main(){
     string num1, num2, ans;
     cout<<"Enter the First number (n1>=n2): ";
     getline(cin,num1);
     cout<<"Enter the Second number: ";
     getline(cin,num2);
     int index1 = num1.size()-1, index2 = num2.size()-1, carry = 0, sum = 0;
    
     while(index2>=0){
        sum = (num1[index1]-'0') + (num2[index2]-'0') + carry;
        carry = sum/10;
        char c = sum%10 + '0';   // integer + ASCII value of 0   (it convert integer into char)
        ans += c;
        index1--, index2--;
     }

     while(index1>=0){
        sum = (num1[index1]-'0')  + carry;
        carry = sum/10;
        char c = sum%10 + '0';
        ans += c;
        index1--;
     }

     if(carry){
        ans += '1';   // 2 number addation  me always carry 1 he ati ah
     }
     reverse(ans.begin(), ans.end());
    
     cout<<ans;
}