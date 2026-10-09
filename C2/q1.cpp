#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        int sum=0;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        unordered_map<int,int>freq;
        for (int i=0;i<n;i++)
        {
            freq[arr[i]]++;
        }
        int  mx = 0;
        int val =0;
        for (auto it : freq)
        {
            if (it.second>mx)
            {
                val = it.first;
                mx = it.second;
            }
            
        }
        int others = n-mx;
        int ans = 0;
        if (others>=mx-1)
        
        {
            ans = sum;
        }
        else
        {
            ans = sum-mx*val + (others+2)*val;
        }
        
        
        cout<<ans<<endl;
    }
    return 0;
}