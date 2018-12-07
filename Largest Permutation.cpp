#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
   ll n,k;
   cin>>n>>k;
   ll arr[n];
   vector<ll>arr1(n+1);
   for(ll i=0;i<n;i++){
        cin>>arr[i];
        arr1[arr[i]]=i+1;
   }
  /* for(ll i=1;i<=n;i++)
    cout<<arr1[i]<<" ";
    cout<<endl;*/
    ll i=-1;
   for(ll j=0;j<k;j++)
   {
       i++;
       if(n-i>0){
            if(arr[i]==n-i)
            {
                j--;
                continue;
            }
            ll a=arr[i];
       swap(arr[arr1[n-i]-1],arr[i]);
       swap(arr1[n-i],arr1[a]);
      /* for(ll i=0;i<n;i++)
            cout<<arr[i]<<" ";
       cout<<endl;
       for(ll i=1;i<=n;i++)
            cout<<arr1[i]<<" ";
        cout<<endl;*/
       }
   }
   for(ll i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}
