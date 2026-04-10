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
        int sum=0;
        vector<int>v(n-1);
        for(int i=0;i<n-1;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        cout<<sum*-1<<endl;
    }
    return 0;
}