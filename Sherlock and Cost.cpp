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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++)
            cin>>arr[i];
        ll v[n][2];
        v[0][0]=0;
        v[0][1]=0;
        for(ll i=1;i<n;i++)
        {
            v[i][0]=max(v[i-1][0],abs(1-arr[i-1])+v[i-1][1]);
            v[i][1]=max(abs(1-arr[i])+v[i-1][0],abs(arr[i]-arr[i-1])+v[i-1][1]);
        }
        cout<<max(v[n-1][0],v[n-1][1])<<endl;
    }
}
