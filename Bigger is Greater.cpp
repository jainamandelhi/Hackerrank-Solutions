#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mp make_pair
using namespace std;
int main()
{
   // freopen("q.in","r",stdin);
    //freopen("q1.in","r",stdin);
    //freopen("a.out","w",stdout);
   int t;
   cin>>t;
   //cin.ignore();
  /* for(int k=0;k<t;k++)
   {
       string h;
       getline(cin,h);
       s0.pb(h);
   }*/
   for(int k=0;k<t;k++)
   {
       string s;
       cin>>s;
       int n=s.size(),flag=1,index;
       for(int i=n-1;i>0;i--)
       {
           if(s[i-1]>=s[i])
                continue;
            else
            {
                flag=0;
                index=i-1;
                break;
            }
       }
       if(flag)
       {
         //  cout<<s0[k]<<" "<<"no answer ";
//           if(s0[k]!="no answer")
              //  cout<<k<<" "<<0<<endl;
           cout<<"no answer"<<endl;
           continue;
       }
       string s1="";
     //  cout<<index<<endl;
       if(index>0)
            s1=s.substr(0,index);
       string s2=s.substr(index,n-index);
       //cout<<s1<<" "<<s2<<endl;
       int j=1;
       for(int i=1;i<s2.size();i++)
       {
           if(s2[i]>s2[0] && s2[i]<=s2[j])
                j=i;
       }
       //cout<<s2<<endl;
        swap(s2[0],s2[j]);
       //cout<<s2<<endl;
        reverse(s2.begin()+1,s2.end());
      //  cout<<s0[k]<<" "<<s1+s2<<" ";
      //  if(s0[k]!=s1+s2)
      //      cout<<k<<" "<<0<<endl;
        cout<<s1+s2<<endl;
   }
    return 0;
}
