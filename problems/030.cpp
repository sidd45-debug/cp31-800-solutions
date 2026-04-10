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
        int k=n;
        int i,output=0;
        for(i=0;k!=0;i++)
        {
            k=k/10;
        }
        for(int j=1;j<=i;j++)
        {
            if(i>j)output+=9;
            else 
            {
                output+=(n/pow(10,j-1));
                break;
            }
        }
        cout<<output<<endl;

    }
    return 0;
}