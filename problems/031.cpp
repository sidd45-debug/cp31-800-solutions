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
        int n,a,b;
        cin>>n>>a>>b;
        if(a==b&&a==n)cout<<"Yes"<<endl;
        else if(a+b>=n-1)cout<<"No"<<endl;
        else cout<<"Yes"<<endl;

    }
    return 0;
}