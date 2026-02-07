  //  Sqrt X
  #include<iostream>
  using namespace std;
  int main()
  {
    int n, i, k;
    cout<<"Enter a number: ";
    cin>>n;

    if(n<=0)
    {
      cout<<"Please Enter positive Number";
      return 0;
    }
    for(i=1; i<=n; i++)
    {
      k=i*i;
        if(k==n)
        {
          cout<<"Sqrt of "<<n<<" is: "<<i;
          return 0;
        }
        
    }
  }