#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    unordered_set<char>st;
    for (char c : s)
    {
        st.insert(c);
    }
    int reqd = st.size();  
    unordered_map<char,int>freq;
    int unique_in_window = 0;
    int l=0;
    int minlen = n;
    for (int r=0;r<n;r++)
    {
        
        if (freq[s[r]]==0)
        {
            unique_in_window++;
        }
        freq[s[r]]++;
        while (reqd==unique_in_window)
        {
            minlen = min(minlen,r-l+1);
            freq[s[l]]--;
            if (freq[s[l]]==0)
            {
                unique_in_window--;
            }
            l++;
        }
    }  
    cout<<minlen<<endl;
 
}