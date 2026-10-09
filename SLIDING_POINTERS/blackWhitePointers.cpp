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
        string arr;
        cin>>arr;
        int whites=0;
        for (int i=0;i<k;i++)
        {
            if (arr[i]=='W')
            {
                whites++;
            }
        }
        int l=0;
        int ans = whites;
        for (int r=k;r<n;r++)
        {   
            if (arr[l]=='W')
            {
                whites--;
            }
            l++;
            if (arr[r]=='W')
            {
                whites++;
            }
            ans=min(ans,whites);

        }
        cout<<ans<<endl;
    }
    return 0;
}