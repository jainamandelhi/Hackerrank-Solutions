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
        int n=s.size(),flag=1;
        for(int i=0;i<n/2;i++)
        {
            if(abs(int(s[i])-int(s[i+1]))!=abs(int(s[n-i-1])-int(s[n-i-2])))
            {
                cout<<"Not Funny"<<endl;
                flag=0;
                break;
            }
        }
        if(flag)
            cout<<"Funny"<<endl;
    }
    return 0;
}
