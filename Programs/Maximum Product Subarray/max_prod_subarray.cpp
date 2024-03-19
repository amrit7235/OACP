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


int maxProduct(vector<int> &nums)
{

    int n = nums.size();
    if(n == 0){
        return 0;
    }

    int pre = 1;
    int suf = 1;
    int ans = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (pre == 0)
            pre = 1;
        if (suf == 0)
            suf = 1;

        pre = pre * nums[i];
        suf = suf * nums[n - i - 1];

        ans = max({ans, pre, suf});
    }

    return ans;
}
void solve()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        nums[i] = a;
    }

    cout<<maxProduct(nums)<<endl;


}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
#ifndef ONLINE_JUDGE
   freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
   
#endif 
    // int t = 1 ;

    int t = 1;
    // cin >> t;
 
    while (t--){
        //cout << "Case #" << count << ": ";
        solve();
    }
    return 0 ;
}