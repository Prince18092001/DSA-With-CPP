// string operation
#include<iostream>
using namespace  std;
int main(){
// print multiple words or print sentence
   string s1;
   getline(cin,s1);
   cout<<s1<<endl<<s1.size()<<endl;

// apppend
 string s2="prince", s3="kumar";
 string s4 =  s2 + s3;                          // s2.append(s3)
 cout<<s4<<endl;


 // push back
 string s5="Rohan";
 s5.push_back('p');
 cout<<s5<<endl;

 // pop back
 string s6="Rocky";
 s6.pop_back();
 cout<<s6<<endl;


 string s7 = "rajnesh";
 s7 = s7 + 'p';     // character           you cannot enter string in single ' ' in which only enter cracter
 cout<<s7<<endl;

 string s8 = "rajnesh";
 s8 = s8 + "kr";        // string
 cout<<s8<<endl;

 string s9 = "He is a \"good\" boy";
 cout<<s9<<endl;

 string s10 = "\\0"; 
 cout<<s10;
}