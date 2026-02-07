// Roman to Integer range[1-3999]
#include<iostream>
using namespace  std;
int num(char c){
    if(c=='I')
       return 1;
    if(c=='V')
       return 5;
    if(c=='X')
       return 10;
    if(c=='L')
       return 50;
    if(c=='C')
       return 100;
    if(c=='D')
       return 500;
    if(c=='M')
       return 1000;

    return 0; // when not match
}
int main(){
  string s;
  cout<<"Enter a ROMAN number: ";
  getline(cin,s);

  int sum=0, index =0;
  while(index<s.size()-1){  // s.size-1 because next character se je compare kara ga
    if(num(s[index]) < num(s[index+1]))  // if next is greater then present then minus present other wise add
       sum -= num(s[index]);
    else
       sum += num(s[index]);
    index++;
  }
    sum += num(s[s.size()-1]);

    cout<<sum;

}