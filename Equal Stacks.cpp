#include <bits/stdc++.h>

using namespace std;


int main()
{
    int a,b,c,s1=0,s2=0,s3=0;
    queue<int>h1;
    queue<int>h2;
    queue<int>h3;
    cin>>a>>b>>c;
    while(a--)
    {
        int d;
        cin>>d;
        h1.push(d);
        s1+=d;
    }
    while(b--)
    {
        int d;
        cin>>d;
        h2.push(d);
        s2+=d;
    }
    while(c--)
    {
        int d;
        cin>>d;
        h3.push(d);
        s3+=d;
    }
    while(s1!=s2 || s2!=s3 ||
          s1!=s3)
    {
        while(s1>s2 || s1>s3)
        {
            s1-=h1.front();
            h1.pop();
        }
        while(s2>s1 || s2>s3)
        {
            s2-=h2.front();
            h2.pop();
        }
        while(s3>s1 || s3>s2)
        {
            s3-=h3.front();
            h3.pop();
        }
    }
    cout<<s1;
}
