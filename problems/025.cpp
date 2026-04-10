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
        vector<char>v(n);
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        for(int i=0;v.size()>=1;)
        {
            if(v[i]!=v[v.size()-1])
            {
                v.erase(v.begin());
                v.erase(v.end()-1);
            }
            else break;
        }
        cout<<v.size()<<endl;
    }
    return 0;
}