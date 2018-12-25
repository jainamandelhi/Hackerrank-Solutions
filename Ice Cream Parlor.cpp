#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<pair<int,int> >v;
        for(int i=0;i<m;i++){
                int a;
                cin>>a;
            v.pb(mp(a,i+1));
        }
        sort(v.begin(),v.end());
        int i=0,j=m-1;
        while(1)
        {
            if(v[i].first+v[j].first==n)
            {
                cout<<min(v[i].second,v[j].second)<<" "<<max(v[i].second,v[j].second)<<endl;
                break;
            }
            else if(v[i].first+v[j].first>n)
                j--;
            else
                i++;
        }
    }
    return 0;
}
