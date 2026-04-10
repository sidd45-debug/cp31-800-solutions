#include <bits/stdc++.h>
using namespace std;
int main()  
{
    int t;
    cin >> t;
    for (int q = 1; q <= t; q++)
    {
        int n,x=0;
        string s;
        cin>>n>>s;
        int maxi=0;
        int k=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]==s[i+1]&&s[i]=='.')
            {
                k++;
            }
            else
            {
                maxi=max(k,maxi);
                k=0;
            }
        }
        if(s[n-2]==s[n-1]&&s[n-2]=='.') maxi=max(k,maxi);
        maxi=maxi+1;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='.') x++;
            
        }
        if(x==0) cout<<"0"<<endl;
        else if(x==1) cout<<"1"<<endl;
        else if(x==2) cout<<"2"<<endl;
        else
        {
            if(maxi>=3) cout<<"2"<<endl;
            else cout<<x<<endl;
        }
    }
    return 0;
}