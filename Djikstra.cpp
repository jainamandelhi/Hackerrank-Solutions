#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define fast ios_base::sync_with_stdio(false)
typedef long long ll;
typedef pair<ll,ll> p;
ll mod=1000000007;
ll gcd(ll a,ll b)
{
    return (b==0)?a:gcd(b,a%b);
}
int main()
{
    fast;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m1;
        cin>>n>>m1;
        vector<vector<ll> >v(n+1,vector<ll>(n+1,INT_MAX));
        vector<vector<ll> >v1(n+1,vector<ll>(n+1,INT_MAX));
        for(ll i=0;i<m1;i++)
        {
            ll x,y,r;
            cin>>x>>y>>r;
            if(r<v[x][y]){
            v[x][y]=r;
            v[y][x]=r;
            }
        }
        ll s;
        cin>>s;
        ll s1=s;
        ll s2=s;
        map<ll,ll>m;
        ll mini2;
        for(ll i=1;i<=n;i++)
        {
            ll mini=INT_MAX;
            s=s1;
            if(m.size()==0)
            {
                m[s]++;
                v1[i][s]=0;
                for(ll j=1;j<=n;j++)
                {
                    if(m[j])
                        continue;
                    v1[i][j]=v[s][j];
                    if(v1[i][j]<mini)
                    {
                        mini=v1[i][j];
                        s1=j;
                    }
                }
                mini2=mini;
                continue;
            }
            m[s]++;
            for(ll j=1;j<=n;j++)
            {
                if(m[j])
                {
                    v1[i][j]=v1[i-1][j];
                    continue;
                }
                if(mini2+v[s][j]<v1[i-1][j])
                {
                    v1[i][j]=mini2+v[s][j];
                }
                else
                    v1[i][j]=v1[i-1][j];
                if(v1[i][j]<mini)
                {
                    mini=v1[i][j];
                    s1=j;
                }
            }
            mini2=mini;
        }
        for(ll i=1;i<=n;i++){
            if(v1[n][i]==0)
                continue;
            if(v1[n][i]==INT_MAX)
            {
                cout<<-1<<" ";
                continue;
            }
            cout<<v1[n][i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
