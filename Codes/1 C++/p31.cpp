// Longest Prefix Suffix
// Prefix : a aa aaa aaaa aaaab aaaaba aaaabaa
// Suffix : a aa aaa baaa abaaa aabaaa aaabaaa
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s = "aaaabaaa";
    int n = s.size();
    vector<string> prefix(n-1, "");
    vector<string> suffix(n-1, "");

    // build prefix
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j <= i; j++){
            prefix[i] += s[j];
        }
    }

    // build suffix
    for(int i = 0; i < n-1; i++){
        for(int j = n-1-i; j < n; j++){
            suffix[i] += s[j];
        }
    }
    
    // Match
    int len = 0;
    for(int i = 0; i < n-1; i++){
        if(prefix[i] == suffix[i]){
            len = i+1;
        }
    }
    cout << len; 
}

// Time Complexity = O(N square)