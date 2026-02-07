//WAP to check if a given sentence is a pangram or not.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string sentence;
    cout<<"Enter the sentence: ";
    getline(cin,sentence);

        vector<bool>alpha(26,0);

        for(int i=0; i<sentence.size(); i++){
            alpha[sentence[i]-'a']=1;
        };
        for(int i=0; i<26; i++){
            if(alpha[i]==0){
                cout<<"The sentence is not pangram";
            return 0;
            }
        }
    cout<<"The sentence is pangram";
        return 1;

}