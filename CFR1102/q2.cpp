#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int n)
{
    string s = to_string(n);
    for (int i=0;i<s.size()/2;i++)
    {
        if (s[i]!=s[s.size()-1-i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for (int i=0;i<=n;i++)
        {
            int a = i;
            int b = n-a;
            if (isPalindrome(a))
            {
                if (b%12==0)
                {
                    cout<<a<<" "<<b<<endl;
                }
            }
        }
        cout<<-1<<endl;
    }
}