// String Matching usung bruteforce approach
#include<iostream>
using namespace std;
int main(){
    string haystack = "abacdabad", needle = "abad";
    int n=haystack.size(), m=needle.size();

    for(int i=0; i<=n-m; i++)
    {
        int first=i, second=0;

        while(second<m)
        {
            if(haystack[first]!=needle[second])
            {
                break;
            }
            else
            {
                first++, second++;
            }
        }
        if(second==m)
        {
           cout<<first - second;
           return 0;
        }

    }
    cout<<-1;
}