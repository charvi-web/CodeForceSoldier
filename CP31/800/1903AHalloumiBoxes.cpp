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
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for (int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if (k==1)
        {
            if (alreadySorted(arr))
            {
                cout<<"YES\n";

            }
            else
            {
                cout<<"NO\n";
            }
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}