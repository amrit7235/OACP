#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes       cout<< "YES"<<endl;
#define no        cout<< "NO"<<endl;
#define print(v)  for(auto &it : v){cout<<i<<" " ;} cout<<endl;

    int totalHammingDistance(vector<int>& nums) {
        int ans = 0;

        for(int j = 0;j<32;j++){
            int one = 0;
            int zero = 0;

            for(int i =0;i<nums.size();i++){
                if( (nums[i] & (1<<j)) == 0 ){
                    zero++;
                }
                else{
                    one++;
                }
            }

            ans += one * zero;
        }

        return ans;
    } 

void solve(){
    ll n;
    cin >> n;

    vector<int>nums(n);

    for(int i =0;i<n;i++){
        ll a;
        cin >> a;
        nums[i] = a;
    }


    cout<<totalHammingDistance(nums)<<endl;


}


int main(){
    // ll t;
    // cin >> t;

    int t = 1;

    while(t--){
        solve();
    }
}