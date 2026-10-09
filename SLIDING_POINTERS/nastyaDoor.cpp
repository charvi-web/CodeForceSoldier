#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n ,k;
        cin>>n>>k;
        vector<int>a(n);
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int cnt = 0;
 
        for (int i=1;i<k-1;i++)
        {
            if (a[i]>a[i+1] && a[i]>a[i-1])
            {
                cnt++;
            }
        }
        int ans = cnt;
        int best_index = 1;
        int l = 0;
        for (int r=k;r<n;r++)
        {
            if (a[l+1]>a[l] && a[l+1]>a[l+2])
            {
                cnt--;
            }
            l++;
            if (a[r-1]>a[r] && a[r-1]>a[r-2])
            {
                cnt++;
            }
            if(cnt>ans)
            {
                ans=cnt;
                best_index=l+1;
            }
        }
        cout<<ans+1<<" "<<best_index<<endl;
    }
    return 0;
}