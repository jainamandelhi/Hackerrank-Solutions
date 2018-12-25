#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
    int m,n;
    cin>>m;
    map<int,int>m1,m2;
    map<int,int>::iterator itr;
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        m2[a]++;
    }
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        m1[a]++;
    }
    for(itr=m1.begin();itr!=m1.end();itr++)
    {
        if(m2.find(itr->first)==m2.end())
            cout<<itr->first<<" ";
        else if(itr->second!=m2[itr->first])
            cout<<itr->first<<" ";
    }
    return 0;
}
