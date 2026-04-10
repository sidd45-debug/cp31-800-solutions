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
        vector<int>v(n);
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            m[v[i]]++;
        }
        if(m[2]==0) cout<<"1"<<endl;
        else if(m[2]%2==1) cout<<"-1"<<endl;
        else
        {
            int k=0;
            int i;
            for(i=0;k<m[2]/2;i++)
            {
                if(v[i]==2) k++;
            }
            cout<<i<<endl;
        }
    }
    return 0;
}