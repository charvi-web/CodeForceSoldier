#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        vector<int>A={a,b,c};
        
        sort(A.begin(),A.end());
        int ans;
        if (A[0]==A[1] || A[1]==A[2] || A[0]==A[1])
        {
            ans =0;
        }
        int ans = min(A[1]-A[0],A[2]-A[1]);
        
        cout<<ans<<endl;

    }
    return 0;
}