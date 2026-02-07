//WAP to check if two strings can be made equal by rotating one of the strings by two places.
#include<iostream>
using namespace std;
void rotateclockwise(string &s){
        char c = s[s.size()-1];
        int index = s.size()-2;
        while(index>=0){
               s[index+1]=s[index];
               index--;
           };
           s[0]=c;
    };
    
  void rotateanticlockwise(string &s){
           char c = s[0];
           int index = 1;
           while(index<s.size()){
               s[index-1]=s[index];
               index++;
           };
           s[s.size()-1]=c;
    };
int main(){
    
        string s1,s2;
        cout<<"Enter first string: ";
        cin>>s1;
        cout<<"Enter second string: ";
        cin>>s2;

        if(s1.size()!=s2.size()){
        cout<<"not match";
        return 0;
        }
        string clockwise = s1 , anticlockwise = s1;
        rotateclockwise(clockwise);
        rotateclockwise(clockwise);
        if(clockwise==s2){
        cout<<"match";
        return 1;
        }
        rotateanticlockwise(anticlockwise);
        rotateanticlockwise(anticlockwise);
        if(anticlockwise==s2){
        cout<<"match";
        return 1;
        }
        cout<<"not match";
        return 0;
}