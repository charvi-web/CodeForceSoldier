#include<bits/stdc++.h>
using namespace std;
int main()
{
        int n;
        cin>>n;
        long long t;
        cin>>t;
        vector<int>a(n);
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long sum =0;
        long long ans =0;
        long long l=0;
        for (int i=0;i<n;i++)
        {
            sum+=a[i];
            while (sum>t)
            {
                sum-=a[l];
                l++;
            }
            ans = max(ans,i-l+1);
 
        
    }
    cout<<ans<<endl;
    return 0;
}