#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>A(n);
    for (int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int i=n-1;
    unordered_set<int>st;
    vector<int>ans;
    for (int i=n-1;i>=0;i--)
    {
        if (st.find(A[i])==st.end())
        {
            st.insert(A[i]);
            ans.push_back(A[i]);
        }
    }
    cout<<ans.size()<<endl;
    for (int i=ans.size()-1;i>=0;i--)
    {
        cout<<ans[i]<<" ";
    }
}
