#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int a=0;
    for(int i=2;i<n;i++)
    {
        if(s[i]=='0' && s[i-1]=='1' && s[i-2]=='0')
        {
            s[i]='1';
            a++;
        }
    }
    cout<<a;
    return 0;
}
