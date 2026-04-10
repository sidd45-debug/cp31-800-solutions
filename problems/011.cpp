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
    int n;
        cin>>n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            if(v[i]<0) v[i]*=-1;    
        }
        sort(v.begin(),v.end());
        cout<<v[0]<<endl;
        
    return 0;
}