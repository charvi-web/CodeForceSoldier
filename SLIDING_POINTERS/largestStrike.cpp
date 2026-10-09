#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[a[i]]++;
        }
        vector<int>valid;
        for (auto it : m)
        {
            if (it.second>=k)
            {
                valid.push_back(it.first);
            }
        }
        if (valid.empty())
        {
            cout<<-1<<endl;
            continue;
        }
        int best_l = valid[0];
        int best_r = valid[0];
        int curr = valid[0];
        int maxlen =0;
        for (int i=0;i<valid.size();i++)
        {
            if (i>0 && valid[i]!=valid[i-1]+1)
            {
                curr = valid[i];
            }

            if (valid[i]-curr>maxlen)
            {
                maxlen = valid[i]-curr;
                best_l = curr;
                best_r = valid[i];
            }
        }
        cout<<best_l<<" "<<best_r<<endl;
    }
    return 0;
}