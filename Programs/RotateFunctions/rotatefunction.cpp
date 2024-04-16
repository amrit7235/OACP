#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes       cout<< "YES"<<endl;
#define no        cout<< "NO"<<endl;
#define print(v)  for(auto &it : v){cout<<i<<" " ;} cout<<endl;

int maxRotateFunction(vector<int>& nums) {
    int n = nums.size();

    int cur_ans = 0;
    int prev_ans = 0;
    int sum = 0;

    for(auto it : nums){
        sum += it;
    }
    for(int i =0;i<n;i++){
        prev_ans += (i * nums[i]);
    } 

    cur_ans = prev_ans;
        
    int j = n-1;
    for(int rotation = 1;rotation < n ;rotation++){
            
        int temp = prev_ans;

        temp = temp - ((n-1) * nums[j]) + (sum - nums[j--]);

        cur_ans = max(cur_ans,temp);
        prev_ans = temp;
    }

    return cur_ans;

}

void solve(){
    int n;
    cin >> n;

    vector<int>nums(n);

    for(int i =0;i<n;i++){
        ll a;
        cin >> a;
        nums[i] = a;
    }
    cout<<maxRotateFunction(nums)<<endl;


}


int main(){
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