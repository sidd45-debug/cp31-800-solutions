#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int j = 0; j < n; j++)
            cin >> v[j];

        vector<int> ans;
        ans.push_back(v[0]);

        for(int j = 1; j < n; j++)
        {
            if(v[j-1] > v[j])
                ans.push_back(1);
            ans.push_back(v[j]);
        }

        cout << ans.size() << endl;
        for(int x : ans)
            cout << x << " ";
        cout << "\n";
    }
    return 0;
}