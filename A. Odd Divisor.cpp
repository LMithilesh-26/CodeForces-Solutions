#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    ll N;
    cin >> N;
    
    cout << (__builtin_popcountll(N) == 1 ? "NO\n" : "YES\n");
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
