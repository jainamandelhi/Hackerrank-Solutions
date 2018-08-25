#include <bits/stdc++.h>

using namespace std;
int tofind(string s,string w)
{
    for(char c:s)
    {
        if(w.find(c)!=string :: npos)
            return 0;
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string cl="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string sl="abcdefghijklmnopqrstuvwxyz";
    string nos="0123456789";
    string sc="!@#$%^&*()-+";
    int ans=0;
    ans+=tofind(s,cl);
    ans+=tofind(s,sl);
    ans+=tofind(s,nos);
    ans+=tofind(s,sc);
    cout<< max(ans,6-n);
}
