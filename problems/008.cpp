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
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            mpp[v[i]]+=1;
        }
        if(mpp[k]>0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
    return 0;
}