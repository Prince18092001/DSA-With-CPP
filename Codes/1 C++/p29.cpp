// Longest Substring Without Repeating Characters
//It is solve by Sliding Window Protocol
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s = "abcdecbeadf"; //ababc
    vector<bool>count(256,0);
    int first=0, second=0, len=0;
    while(second<s.size()){
        //if char repeat
        while(count[s[second]]){  // It check that character already present in vector or not if present then remove by initilize count 0 from start to previous char that currently repeat
           count[s[first]] = 0;
           first++;
        }
        //simple count
        count[s[second]] = 1;
        len = max(len,second-first+1);
        second++;
    }
    cout<<len;
}