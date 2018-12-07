#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
   string s;
   cin>>s;
   int i=-1,n=s.size(),t=0,flag=0;
   while(1)
   {
       i++;
       if(i<n-1 && s[i]==s[i+1])
       {
           t+=2;
           s.erase(i,2);
           flag=1;
       }
       if(flag==1 && i==n-1)
       {
           flag=0;
           i=-1;
       }
       if(flag==0 && i==n-1)
            break;
   }
   if(t==n)
   {
       cout<<"Empty String";
       return 0;
   }
   cout<<s;
    return 0;
}
