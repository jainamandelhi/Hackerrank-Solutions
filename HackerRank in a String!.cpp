#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string h="hackerrank";
        string s;
        cin>>s;
        int j=0,flag=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==h[j])
                j++;
            if(j==h.size())
            {
                flag=1;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
