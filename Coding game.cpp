#include<bits/stdc++.h>
using namespace std;
int bs(int start,int last,double p,int n)
{
  //  cout << start << " " << last << " " << (start+last)/2 << endl;
    //if(start > last)return -1;
    int mid=start+(last-start)/2;
    double q=0,q1=0;
    for(int i=0;i<n;i++)
    {
        q+=log(mid);
        if(mid>1)
            q1+=log(mid-1);
    }
    if(p<q && q1<=p)
        return mid;
    if(p/q<1)
        return bs(start,mid-1,p,n);
    else
        return bs(mid+1,last,p,n);
}
int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    double p=0;
    int mx = INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        p+=log(arr[i]);
        mx = max(mx,arr[i]);
    }
    //sort(arr,arr+n);
    int ans=bs(1,mx+1,p,n);
    cout<<ans;
}
