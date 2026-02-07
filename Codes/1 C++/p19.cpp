// Write a C++ program to defang an IP address.
#include<iostream>
using namespace std;
int main(){
    string address;
    cout<<"Enter the IP Address: ";
    cin>>address;
    int index = 0;
        string ans;
        while(index<address.size()){
            if(address[index] == '.')
            ans = ans + "[.]";
            else
            ans = ans + address[index];

            index++;
        }
        cout<<"The new address is: "<<ans;
}