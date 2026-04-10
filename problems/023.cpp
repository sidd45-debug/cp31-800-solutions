#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;

int main()  
{
    int t;
    cin >> t;
    for (int q = 1; q <= t; q++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(d<b) cout<<"-1"<<endl;
        else if(d==b)
        {
            if(c<a) cout<<a-c<<endl;
            else if(c==a) cout<<"0"<<endl;
            else cout<<"-1"<<endl;
        }
        else
        {
            int ans=0;
            int k=d-b;
            ans+=k;
            int x=a+d-b;
            if(x<c) cout<<"-1"<<endl;
            else if(x==c) cout<<ans<<endl;
            else cout<<ans+x-c<<endl;
        }
    }
    return 0;
}