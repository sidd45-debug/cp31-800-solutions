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
        int add=0;
        int p=1;
        for(int i=0;i<n;i++)
        {
            cin>>v[i];
            add+=v[i];
            p*=v[i];
        }
        if(p==1&&add>=0)cout<<"0"<<endl;
        else
        {
            if(add>=0) cout<<"1"<<endl;
            else
            {
                int k=-1*add;
                if(p==1&&k%2==0) 
                {
                    if(k%4==0)cout<<k/2<<endl;
                    else cout<<k/2+1<<endl;
                    
                }
                else if(p==1&&k%2==1)
                {
                    if((k+1)%4==0)cout<<(k+1)/2<<endl;
                    else cout<<(k+1)/2+1<<endl;
                }
                else if(p==-1&&k%2==1)
                {
                    if((k+1)%4==0)cout<<(k+1)/2+1<<endl;
                    else cout<<(k+1)/2<<endl;
                }
                else 
                {
                    if(k%4==0) cout<<k/2+1<<endl;
                    else cout<<k/2<<endl;
                }
            }
        }

    }
    return 0;
}