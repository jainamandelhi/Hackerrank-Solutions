#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,ans=0;
        cin>>n;
        vector<int>s(n+1);
        int arr[n+1],arr1[n+1];
        for(ll i=1;i<=n;i++)
        {
            cin>>arr[i];
            arr1[arr[i]]=i;
        }
        for(ll i=1;i<=n;i++)
        {
            ll j=arr1[i];
            if(j>i)
            {
                while(arr[i]!=i)
                {
                    swap(arr[j],arr[j-1]);
                    swap(arr1[arr[j]],arr1[arr[j-1]]);
                    s[arr[j]]++;
                    j--;
                    ans++;
                }
            else
            {
                while(arr[i]!=i)
                {
                    swap(arr[j],arr[j+1]);
                    swap(arr1[arr[j]],arr1[arr[j-1]]);
                    s[arr[j]]++;
                    j++;
                    ans++;
                }
            }
        }
        int flag=0;
        for(ll i=1;i<=n;i++)
        {
            if(s[i]>2)
                flag=1;
        }
        if(!flag)
            cout<<ans<<endl;
        else
            cout<<"Too chaotic"<<endl;
    }
	return 0;
}
