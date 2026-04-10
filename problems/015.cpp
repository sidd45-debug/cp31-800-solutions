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
        vector<int>ve;
        vector<int>vo;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]%2==0) ve.push_back(v[i]);
            else vo.push_back(v[i]);
        }
        int o=vo.size();
        int e=ve.size();
        if(o>0&&e>0)
        {
            if(o%2==0)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
        else if(o%2==0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}