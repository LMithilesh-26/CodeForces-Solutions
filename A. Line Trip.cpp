#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    
    int ans = 0, a = 0;
    while(n--)
    {
        int b = 0;
        cin >> b;
        
        ans = max(ans, b-a);
        a = b;
    }
    ans = max(ans, 2 * (x - a));
    cout << ans << "\n";
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
