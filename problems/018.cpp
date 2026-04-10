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
        int x,k;
        cin>>x>>k;
        if(x%k>0)
        {
            cout<<"1"<<endl;
            cout<<x<<endl;
        }
        else
        {
            cout<<"2"<<endl;
            cout<<x+1<<" -1"<<endl;
        }
    }
    return 0;
}