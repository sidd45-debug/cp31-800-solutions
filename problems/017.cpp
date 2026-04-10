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
        int n,k,x;
        int a=1,b=2,c=3;
        cin>>n>>k>>x;
        if (x!=1)
        {
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i=0;i<n;i++) cout<<a<<" ";
            
        }
        else
        {
            if(k>=3)
            {
                cout<<"YES"<<endl;
                if(n%2==0)
                {
                    cout<<n/2<<endl;
                    for(int i=0;i<n/2;i++)
                    {
                        cout<<b<<" ";
                    }
                    
                }
                else 
                {
                    cout<<(n-3)/2+1<<endl;
                    cout<<c<<" ";
                    for(int i=0;i<(n-3)/2;i++)
                    {
                        cout<<b<<" ";
                    }
                    
                }
            }
            if(k==2)
            {
                if(n%2==1) cout<<"NO";
                else
                {
                    cout<<"YES"<<endl;
                    cout<<n/2<<endl;
                    for(int i=0;i<n/2;i++) cout<<b<<" ";
                    
                }
            }
            if(k==1) cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
}