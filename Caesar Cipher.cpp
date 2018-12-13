#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int k;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(!(s[i]>='a' && s[i]<='z') && !(s[i]>='A' && s[i]<='Z'))
        {
            cout<<s[i];
            continue;
        }
        char ch=int(s[i])+k;
        if(int(s[i])+k>'z' && s[i]<='z' && s[i]>='a'){
            ch=(int(s[i])+k-96)%26+96;
            if((int(s[i])+k-96)%26==0)
                ch='z';
        }
        else if(int(s[i])+k>'Z' && s[i]<='Z'){
            ch=(int(s[i])+k-64)%26+64;
            if((int(s[i])+k-64)%26==0)
                ch='Z';
        }
        cout<<ch;
    }
    return 0;
}
