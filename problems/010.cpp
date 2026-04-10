#include <bits/stdc++.h>
using namespace std;

int main()  
{
    int t;
    cin >> t;
    for (int q = 1; q <= t; q++)
    {
        int output=0;
        char arr[10][10];
        for(int i=0;i<10;i++)
        {
            for(int j=0;j<10;j++)
            {
                cin>>arr[i][j];
                if (arr[i][j]=='X')
                {if(i==0||i==9||j==0||j==9) output+=1;
                else if(i==1||i==8||j==1||j==8) output+=2;
                else if(i==2||i==7||j==2||j==7) output+=3;
                else if(i==3||i==6||j==3||j==6) output+=4;
                else output+=5; }
            }
            
        }
        cout<<output<<endl;

    }
    return 0;
}