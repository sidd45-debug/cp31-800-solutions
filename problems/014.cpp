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
        int a,b,c;
        cin>>a>>b>>c;
        if(c%2==0)
        {
            if(a>b) cout<<"First"<<endl;
            else if(a==b) cout<<"Second"<<endl;
            else cout<<"Second"<<endl;
        }
        else{
            if(a>=b)cout<<"First"<<endl;
            else cout<<"Second"<<endl;
        }
    }
    return 0;
}