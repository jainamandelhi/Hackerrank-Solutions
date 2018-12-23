#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    float m=sqrt(n);
    int m2=floor(m),m1=ceil(m);
    int k=0;
    vector<vector<char> >s1(m1);
    for(int j=0;j<m1;j++)
    {
        s1[j].pb(s[k]);
        k++;
        if(k==n)
            break;
        if(j==m1-1)
            j=-1;
    }
    for(int i=0;i<s1.size();i++)
    {
        for(int j=0;j<s1[i].size();j++)
            cout<<s1[i][j];
        cout<<" ";
    }
    return 0;
}
