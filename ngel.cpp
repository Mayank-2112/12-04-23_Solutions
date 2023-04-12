#include <iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;

int main() {
    int j=0,n;
    cout<<"Enter the size of arry:-";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:-";
    for(j=0;j<n;j++)
    {
        cin>>arr[j];
    }
    reverse(arr,arr+n);
    vector<long long >rs;
    stack<long long >st;
    for(int i=n-1;i>=0;i--)
    {
        if(st.empty())
        rs.push_back(-1);
        else if(arr[i]<st.top())
        rs.push_back(st.top());
        else{
        while(!st.empty() && arr[i]>=st.top())
        {
            st.pop();
        }
        if(st.empty())
        rs.push_back(-1);
        else
        rs.push_back(st.top());
        }
         st.push(arr[i]);
    }
    reverse(rs.begin(),rs.end());
    for(int k=rs.size()-1;k>=0;k--)
    {
        cout<<rs[k]<<" ";
    }
    
    return 0;
}
