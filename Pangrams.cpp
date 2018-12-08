#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    s[0]=char(s[0]+32);
    map<char,int>m;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='a' && s[i]<='z')
            m[s[i]]++;
    }
    //cout<<m.size()<<endl;
    if(m.size()==26)
        cout<<"pangram";
    else
        cout<<"not pangram";
    return 0;
}
