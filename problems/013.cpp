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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        vector<int>v1;
        vector<int>v2;
        sort(a,a+n);
        if(a[0]==a[n-1]) cout<<"-1"<<endl;
        else
        {
            v2.push_back(a[n-1]);
            if(a[n-1]!=a[n-2])
            {
                
                for(int i=0;i<n-1;i++)
                {
                    v1.push_back(a[i]);
                }
                cout<<v1.size()<<" "<<v2.size()<<endl;
                for(int i=0;i<v1.size();i++)
                {
                    cout<<v1[i]<<" ";
                }
                cout<<"\n";
                cout<<a[n-1]<<endl;
            }
            else
            {
                for(int i=n-1;a[i]==a[i-1];i--)
                {
                    v2.push_back(a[i-1]);
                }
                int k=v2.size();
                for(int i=0;i<n-k;i++)
                {
                    v1.push_back(a[i]);
                }
                 cout<<v1.size()<<" "<<v2.size()<<endl;
                for(int i=0;i<v1.size();i++)
                {
                    cout<<v1[i]<<" ";
                }
                cout<<"\n";
                for(int i=0;i<v2.size();i++)
                {
                    cout<<v2[i]<<" ";
                }
                cout<<"\n";

            }
        }
    }
    return 0;
}