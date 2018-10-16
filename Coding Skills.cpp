#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long n,x;
    cin>>n>>x;
    vector<long>arr(n);
    for(long i=0;i<n;i++)
        cin>>arr[i];
    for(long i=0;i<n;i++)
    {
        arr[i]-=x;
    }
    long maxtillhere=0,maxtotal=0;
    for(long i=0;i<n;i++)
    {
        //cout<<endl;
        maxtillhere+=arr[i];
        if(maxtillhere>maxtotal)
            maxtotal=maxtillhere;
        if(maxtillhere<0)
            maxtillhere=0;
        //cout<<maxtillhere<<" "<<maxtotal;
    }
    cout<<x+maxtotal;
    /* Enter your code here. Read input from STDIN. Prlong output to STDOUT */
    return 0;
}
