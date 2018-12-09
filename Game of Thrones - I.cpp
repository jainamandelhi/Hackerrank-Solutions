#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char,int>m;
    for(int i=0;i<s.size();i++)
        m[s[i]]++;
    int odd=0;
    map<char,int>::iterator itr;
    for(itr=m.begin();itr!=m.end();itr++)
    {
        if(itr->second%2!=0)
            odd++;
    }
    if(odd<=1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
