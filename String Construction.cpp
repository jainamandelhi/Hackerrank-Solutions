#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    string s;
    cin>>s;
    int n=s.size();
    map<char,int>m;
    for(int i=0;i<n;i++)
        m[s[i]]++;
    cout<<m.size()<<endl;
    }
    return 0;
}
