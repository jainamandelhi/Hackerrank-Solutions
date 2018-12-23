#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            if(i>0)
                arr[i]+=arr[i-1];
        }
        if(n==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        for(ll i=0;i<n;i++)
        {
            if(i==0)
            {
                if(arr[n-1]-arr[0]==0)
                {
                    cout<<"YES"<<endl;
                    break;
                }
            }
            if(i==n-1)
            {
                if(arr[n-2]==0)
                {
                    cout<<"YES"<<endl;
                    break;
                }
            }
            if(arr[i-1]==arr[n-1]-arr[i])
            {
                cout<<"YES"<<endl;
                break;
            }
            if(i==n-1)
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
