// Sorting the Sentence
#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s;
    cout<<"Enter a String with its position: "; // Ex:- "is2 sentence4 This1 a3"
    getline(cin,s);
    vector<string> ans(10);
    string temp;
    int count = 0, index = 0;
    while(index<s.size()){
          if(s[index]==' '){
              int position = temp[temp.size()-1]-'0';
              temp.pop_back();
              ans[position] = temp;
              temp.clear();
              count++; 
          }
          else
            temp+=s[index];
            index++;
        }
        int position = temp[temp.size()-1]-'0';
              temp.pop_back();
              ans[position] = temp;
              temp.clear();
              count++;

        for(int i=1; i<=count; i++){
            temp+=ans[i];
            temp+= ' ';
        }
         temp.pop_back();
         cout<<temp;
    
}