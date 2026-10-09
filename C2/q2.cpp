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
        string s;
        cin>>s;
        int cnt0 = 0;
        int cnt1 = 0;
 
        for (auto it : s)
        {
            if (it=='0')
            {
                cnt0++;
            }
            else
            {
                cnt1++;
            }
        }
 
        int del0 = 0;
        int del1 = 0;
        for (int i=1;i<n;i++)
        {
            if (s[i]==s[i-1])
            {
                if (s[i]=='0')
                {
                    del0++;
                }
                else
                {
                    del1++;
                }
            }
        }
        int need0 = del0;
        int need1 = del1;
        int ans = 0;
        if (del0>del1)
        {
            need1 = max(del1,del0-1);
                if (need1>cnt1)
                {
                    cout<<-1<<endl;
                    continue;
                }
        }
        else if (del1>del0)
        {
            need0 = max(del1-1,del0);
            if (need0>cnt0)
            {
                cout<<-1<<endl;
                continue;
            }
        }
        cout<<need0+need1<<endl;
    }
    return 0;
}