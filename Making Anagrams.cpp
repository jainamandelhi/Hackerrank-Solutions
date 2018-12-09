#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
    string s;
    cin>>s;
    string s1;
    cin>>s1;
    vector<int>a(26);
    vector<int>a1(26);
    for(int i=0;i<s.size();i++)
        a[int(s[i])-97]++;
    for(int i=0;i<s1.size();i++)
        a1[int(s1[i])-97]++;
    int o=0;
    for(int i=0;i<26;i++)
    {
        if(a[i]!=a1[i])
            o+=abs(a[i]-a1[i]);
    }
    cout<<o;
    return 0;
}
