#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        vector<int>a(n);
        int ts=0;
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for (int i=0;i<n;i++)
        {
            ts+=a[i];
        }
        if (ts<s)
        {
            cout<<-1<<endl;
            continue;
        }
        int l =0;
        int sum=0;
        int maxS =0;
        for(int r=0;r<n;r++)
        {
            sum+=a[r];
            while(sum>s)
            {
                sum-=a[l];
                l++;
            }
            if (sum==s)
            {
                maxS = max(maxS,r-l+1);
            }
        }
        cout<<n-maxS<<endl;
    }
}
