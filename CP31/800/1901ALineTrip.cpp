#include<bits/stdc++.h>
using namespace std;
bool alreadySorted(vector<int>&arr)
{
    int n = arr.size();
    for (int i=0;i<n-1;i++)
    {
        if (arr[i]>arr[i+1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int max_stretch = INT_MIN;
        for (int i=1;i<n;i++)
        {
            max_stretch = max(max_stretch,arr[i]-arr[i-1]);
        }
        max_stretch = max(max_stretch,2*(x-arr[n-1]));
        max_stretch = max(max_stretch,arr[0]);
        cout<<max_stretch<<endl;
    }
    return 0;
}