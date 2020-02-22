#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    ll temp=arr[0],ans=INT_MAX;
    for(ll i=temp;i>=temp-4;i--)
    {
        ll t=0;
        for(ll j=0;j<n;j++)
        {
            ll a=arr[j];
            a=a-i;
            t=t+a/5;
            a%=5;
            t=t+a/2;
            a%=2;
            t=t+a;
        }
        //cout<<i<<" "<<t<<endl;
        ans=min(ans,t);
    }
    cout<<ans<<endl;
}
}
