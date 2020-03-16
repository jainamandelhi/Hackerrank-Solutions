#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define ll long long
#define mod 1000000007
using namespace std;
ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}
int main()
{
    ios_base:: sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
    string s;
    cin>>s;
    ll n=s.size();
    //vector<vector<ll> >v(9,vector<ll>(s.size()+1));
    ll j=0;
    vector<ll>ans(n+1);
    vector<ll>temp(n+1);
    temp[1]=1;
    for(ll i=2;i<=n;i++)
        temp[i]=(temp[i-1]%mod*10+1)%mod;
    for(ll i=n-1;i>=0;i--)
    {
        ll a=s[i]-'0';
        j++;
        ans[j]=ans[j-1];
        if(a==0)
            continue;
        //v[a][j]++;
        ans[j]=(ans[j-1]%mod+a%mod*temp[j]%mod)%mod;
    }
    ll sum=0;
    for(ll i=1;i<ans.size();i++)
    {
        sum=(sum%mod+ans[i]%mod)%mod;
    }
    cout<<sum%mod;
}
