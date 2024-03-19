#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define print(v)          \
    for (auto &it : v)    \
    {                     \
        cout << i << " "; \
    }                     \
    cout << endl;

void solve()
{   
    vector<int>a(200);
    vector<int>b(200);
    vector<vector<int>>dp(200,vector<int>(200,0));
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (i - 1 >= 0 && j - 1 >= 0)
                dp[i][j] = max(dp[i][j], dp[i - 1][j - 1]);
            if (abs(a[i] - b[j]) <= 1)
                dp[i][j]++;
            if (i - 1 >= 0)
                dp[i][j] = max(dp[i][j], dp[i - 1][j]);
            if (j - 1 >= 0)
                dp[i][j] = max(dp[i][j], dp[i][j - 1]);
        }
    cout << dp[n - 1][m - 1];
}

int main()
{
    ll t;
    // cin >> t;
    t = 1;

    while (t--)
    {
        solve();
    }
}

