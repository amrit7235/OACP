#include <bits/stdc++.h>
using namespace std;

int minPatches(vector<int> &nums, int n)
{
    long long int sum = 0, cnt = 0, i = 0;
    while (sum < n)
    {
        // cout<<sum<<" ";
        if (i < nums.size() && nums[i] <= sum + 1)
        {
            sum += nums[i++];
        }
        else
        {
            cnt++;
            sum += sum + 1;
        }
    }
    return cnt;
}

void solve()
{

    int len;
    cin >> len;

    vector<int> nums(len);

    for (int i = 0; i < len; i++)
    {
        int a;
        cin >> a;
        nums[i] = a;
    }

    int n;
    cin >> n;

    cout << minPatches(nums, n) << endl;
}

int main()
{
    solve();
}