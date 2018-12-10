#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        int a=0;
        for(int i=0;i<n/2;i++)
            a+=abs(int(s[i])-int(s[n-i-1]));
        cout<<a<<endl;
    }
    return 0;
}
