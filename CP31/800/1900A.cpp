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
        int cnt =0;
        bool three=false;
        for (int i=0;i<n;i++)
        {
            if (s[i]=='.')
            {
                cnt++;
            }
            if (i>=2 && s[i]=='.' && s[i-1]=='.' && s[i-2]=='.')
            {
                three=true;
            }
        }
        if (three)
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<cnt<<endl;
        }
    }
    return 0;
}