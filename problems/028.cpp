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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end(),greater<int>());
        if(v[0]==v[n-1]) cout<<"NO"<<endl;
        else
        {
            if(v[0]!=v[1])
            {
                cout<<"YES"<<endl;
                for(auto it:v)
                {
                    cout<<it<<" ";
                }
                cout<<endl;
            }
            else 
            {
                int x=v[0];
                int i;
                for(i=0;v[i]==x;i++)
                {

                }
                int k=v[i];
                v[1]=k;
                v[i]=x;
                cout<<"YES"<<endl;
                for(auto it:v)
                {
                    cout<<it<<" ";
                }
                cout<<endl;
            }

        }

    }
    return 0;
}