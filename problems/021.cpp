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
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
        }
        int maxi=0;
        int k=1;
        if(n>1)
        {
            for(int i=0;i<n-1;i++)
            {
                if(v[i]==0&&v[i+1]==0) k++;
                else
                {
                    maxi=max(k,maxi);
                    k=1;
                }

            }
            if(v[n-1]==0&&v[n-2]==0)
            {
                maxi=max(k,maxi);
                k=1;
            }
            sort(v.begin(),v.end());
            if(v[0]==0)cout<<maxi<<endl;
            else cout<<"0"<<endl;
        }
        else 
        {
            if(v[0]==0)cout<<"1"<<endl;
            else cout<<"0"<<endl;
        }

    }
    return 0;
}