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
        cin>>n;
        int mini=2147483647;
        vector<int>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        vector<int>v2(v);
        sort(v2.begin(),v2.end());
        if(v2==v) 
        {
            for(int i=0;i<n-1;i++)
            {
                int k;
                k=v[i]-v[i+1];
                if(k<0)k*=-1;
                if(k<mini)
                {
                    mini=k;
                }
            }
            cout<<mini/2+1<<endl;
        }
        else cout<<"0"<<endl;
    }
    return 0;
}