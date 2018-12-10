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
        string s;
        cin>>s;
        int n=s.size();
        int a=0;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
            {
                s.erase(i,1);
                a++;
                i--;
            }
        }
        cout<<a<<endl;
    }
    return 0;
}
