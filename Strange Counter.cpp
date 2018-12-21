#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long t=0,i=3;
    while(t<n)
    {
        t+=i;
        i*=2;
    }
    i/=2;
    t=t-i;
    n=n-t;
    cout<<i-n+1;
    return 0;
}
