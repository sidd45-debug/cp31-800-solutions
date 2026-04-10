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
        cin >> n;
        vector<int> v(n);
        vector<int> v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i]%2==0) v2[i]=2;
            else v2[i]=1;
        }
        for(int i=0;i<v.size()-1;)
        {
            if(v2[i]==v2[i+1]) 
            {
                v.erase(v.begin()+i+1);
                v2.erase(v2.begin()+i+1);

            }
            else i++;
            
        }
        cout<<n-v.size()<<endl;
    }
    return 0;
}