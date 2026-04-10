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
        long long n,k;
        cin>>n>>k;
        if((n-k)%2==0||n%2==0) cout<<"YES"<<endl;
        else if(k==1)cout<<"YES"<<endl;
        else
        {
            if(n%2==0&&n>=2*k) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
    return 0;
}