#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;
int main()
{
    //Create declare a Vector
    vector<int>v;
    //size & capacity
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;
    
    v.push_back(2);
    v.push_back(4);
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;
    
    v.push_back(2);
    v.push_back(4);
    v.push_back(8);
    cout<<"Size of v: "<<v.size()<<endl;
    cout<<"Capacity of v: "<<v.capacity()<<endl;
    
    //pdate value
    v[1]=5;
    
    //initilize value in vector
    vector<int>v1(5,1);
    cout<<"Size of v1: "<<v1.size()<<endl;
    cout<<"Capacity of v1: "<<v1.capacity()<<endl;
    
    v1.push_back(8);
    cout<<"Size of v1: "<<v1.size()<<endl;
    cout<<"Capacity of v1: "<<v1.capacity()<<endl;
    
    // initilize vector in other way
    vector<int>v3={1,2,3,4,5};
    cout<<"Size of v3: "<<v3.size()<<endl;
    cout<<"Capacity of v3: "<<v3.capacity()<<endl;
    
    //Delete value from vector
    vector<int>vnew;
    vnew.push_back(4);
    vnew.push_back(41);
    vnew.push_back(14);
    vnew.push_back(42);
    vnew.push_back(84);
    vnew.pop_back();
    cout<<"Size of vnew: "<<vnew.size()<<endl;
    cout<<"Capacity of vnew: "<<vnew.capacity()<<endl;
    
    vnew.erase(vnew.begin()+1);
    cout<<"Size of vnew: "<<vnew.size()<<endl;
    cout<<"Capacity of vnew: "<<vnew.capacity()<<endl;
    
    for(int i=0; i<vnew.size(); i++)
    cout<<vnew[i]<<" ";
    
    cout<<endl;
    
    vnew.insert(vnew.begin()+1,15);
    for(int i=0; i<vnew.size(); i++)
    cout<<vnew[i]<<" ";
    
    cout<<endl;
    
    vnew[1]=37;
    for(int i=0; i<vnew.size(); i++)
    cout<<vnew[i]<<" ";
    
    cout<<endl;
    
    vnew.clear();
    cout<<"Size of vnew: "<<vnew.size()<<endl;
    cout<<"Capacity of vnew: "<<vnew.capacity()<<endl;
    
    vector<int>arr;
    arr.push_back(2);
    arr.push_back(12);
    arr.push_back(21);
    arr.push_back(122);
    
    cout<<arr[0]<<endl;
    cout<<arr.front()<<endl;
    cout<<arr[arr.size()-1]<<endl;
    cout<<arr.back()<<endl;
    
    //Copy value of vector to another vector
    vector<int>a;
    a=arr;
    cout<<a.size()<<endl;
    
    for(auto it=arr.begin(); it!=arr.end(); it++)
    {
        cout<<*it<<" ";
    }
    
    cout<<endl;
    // other way to print
    for(auto i: arr)
    cout<<i<<" ";
    cout<<endl;
    //sort in increasing order
    vector<int>ans;
    ans.push_back(5);
    ans.push_back(235);
    ans.push_back(15);
    ans.push_back(54);
    ans.push_back(125);
    
    sort(ans.begin(), ans.end());
    
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    //sort in decreasing order
    sort(ans.begin(), ans.end(), greater<int>());
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    //sort in decreasing order
    sort(ans.rbegin(), ans.rend());
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
    //Search in binary search
    sort(ans.begin(), ans.end()); // Sort the vector before using binary_search
    cout<<binary_search(ans.begin(), ans.end(), 54);
    cout<<endl;
    cout<<binary_search(ans.begin(), ans.end(), 14)<<endl;
    
    //Find index of any element/number
    //cout<<find(ans.begin(), ans.end(), 54) it is a iterator that point 54
    cout<<find(ans.begin(), ans.end(), 54)-ans.begin();
}