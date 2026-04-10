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
        vector<int>v2(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            v2[i]=n-v[i]+1;
        }
        for(int i=0;i<n;i++)
        {
            cout<<v2[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}