#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>t(n);
    for (int i=0;i<n;i++)
    {
        cin>>t[i];
    }
    vector<int>s1,s2,s3;
    for (int i=0;i<n;i++)
    {
        if (t[i]==1)
        {
            s1.push_back(i+1);
        }
        if (t[i]==2)
        {
            s2.push_back(i+1);
        }
        if (t[i]==3)
        {
            s3.push_back(i+1);
        }
    }
    int m = min({s1.size(),s2.size(),s3.size()});
    cout<<m<<endl;
    for (int i=0;i<m;i++)
    {
        cout<<s1[i]<<" "<<s2[i]<<" "<<s3[i]<<endl;
    }
    return 0;
}