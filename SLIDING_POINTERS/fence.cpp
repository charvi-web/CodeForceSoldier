#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n ,k;
    cin>>n>>k;
    vector<int>H(n);
    for(int i=0;i<n;i++)
    {
        cin>>H[i];
    }
    int ans =0;
    int sum=0;
    for (int i=0;i<k;i++)
    {
        sum+=H[i];
    }
    ans = sum;
    int best_index = 1;
    int l=0;
    for(int r=k;r<n;r++)
    {
        sum-=H[l];
        l++;
        sum+=H[r];
        if(sum<ans)
        {
            ans=sum;
            best_index=l+1;
        }
    }
    cout<<best_index<<endl;

    return 0;
}