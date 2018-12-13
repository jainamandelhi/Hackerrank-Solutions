#include<bits/stdc++.h>
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
        if(n%2!=0)
        {
            cout<<-1<<endl;
            continue;
        }
        string s1=s.substr(n/2,n/2);
        vector<int>v(26);
        vector<int>v1(26);
        n/=2;
        for(int i=0;i<n;i++){
            v[int(s[i])-97]++;
            v1[int(s1[i])-97]++;
        }
        int sum=0;
        for(int i=0;i<26;i++)
        {
            if(v[i]-v1[i]>0)
                sum+=abs(v[i]-v1[i]);
        }
        cout<<sum<<endl;
    }
    return 0;
}
