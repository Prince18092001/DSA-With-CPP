// Sort Vowel in a String
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s;
    cout<<"Enter a String: ";
    getline(cin,s);
    vector<int>lower(26,0);
    vector<int>upper(26,0);

    for(int i=0; i<s.size(); i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
        lower[s[i]-'a']++; // if exist then increment      lower vector
        s[i] = '#';
        }
        else if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
        upper[s[i]-'A']++; // upper vector
        s[i] = '#';
        }
    }
    string ans;
    for(int i=0; i<26; i++){ //first chose upper vector because sort according to ASCII value aur capital letter in ASCII value kam hoti ha small letter se
          char c = 'A'+i;
          while(upper[i]){
            ans += c;       // store all vowel in ans and it automatically become in sorted order
            upper[i]--;
          }
    }
    for(int i=0; i<26; i++){ //secondly chose lower vector
          char c = 'a'+i;
          while(lower[i]){
            ans += c;
            lower[i]--;
          }
    }

    int first=0,second=0;
    while(second<ans.size()){          // replace # with sorted vowel
         if(s[first]=='#'){   
            s[first]=ans[second];
            second++;
         }
         first++;
    }
    cout<<s;
} 