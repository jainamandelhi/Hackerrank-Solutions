#include <cmath>
#include<bits/stdc++.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    queue<int>q;
    while(t--)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            int b;
            cin>>b;
            q.push(b);
        }
        if(a==2)
            q.pop();
        if(a==3)
            cout<<q.front()<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
