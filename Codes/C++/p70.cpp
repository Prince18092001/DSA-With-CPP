 // Number is Armstrong or NOT

#include<iostream>
#include<cmath>
using namespace std;
   // Count Digit Function
int count_Digit(int n)
{
    int count = 0;
    while(n)
    {
      count++;
      n/=10;
    }
    return count;
}
     // Is Armstrong or not Function
bool Armstrong(int num, int digit)
{
    int n=num, rem, ans=0;
    while(n)
    {
    rem=n%10;
    n/=10;
    ans = ans + round(pow(rem,digit));  // "power function" It is built in function in C++  , round is used because it 0.9 convert into 1
    }
    return ans==num;
}


int main()
{
    int num;
    cout<<"Enter a Number: ";
    cin>>num;

      int digit = count_Digit(num);  // call count function
      if(Armstrong(num,digit))
      cout << num << " is an Armstrong number." << endl;
      else
      cout << num << " is NOT an Armstrong number." << endl;

}