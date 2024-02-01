#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    
    vector<int> v(n);
    for(int i=0; i<n; cin >> v[i++]);
    
    bool isSorted = true;
    for(int i=1; i<n; i++)
    {
        if(v[i] < v[i-1]) 
        {
            isSorted = false;
            break;
        }
    }
    if(k == 1 && !isSorted) cout << "NO" << "\n";
    
    else cout << "YES" << "\n";
}
int main()
{
    int tc;
    cin >> tc;
    
    while(tc--)
    {
        solve();
    }
    return 0;
}
