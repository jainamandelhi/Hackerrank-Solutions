#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
    int t;
    cin>>t;
    vector<int>v(26);
    for(int j=0;j<t;j++)
    {
        string s;
        cin>>s;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(v[int(s[i])-97]==j)
                v[int(s[i])-97]++;
        }
    }
    int a=0;
    for(int i=0;i<26;i++)
    {
        if(v[i]==t){
            a++;
          //  cout<<char(i+97)<<" ";
        }
    }
    cout<<a;
    return 0;
}
