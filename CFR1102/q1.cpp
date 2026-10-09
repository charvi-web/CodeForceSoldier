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
        vector<int>b(n);
        for (int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        sort(b.rbegin(),b.rend());
        if (n<2)
        {
            cout<<-1<<endl;
            continue;
        }

        if (n==2)
        {
            cout<<b[0]<<" "<<b[1]<<endl;
            continue;
        }
        bool ok;
        
        for (int i=2;i<n;i++)
        {
            if (b[i-2]%b[i-1]!=b[i])
            
            {
                ok=false;
                break;
            }
        }
        if (ok)
        {
            cout<<b[0]<<" "<<b[1]<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}