#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define yes       cout<< "YES"<<endl;
#define no        cout<< "NO"<<endl;
#define print(v)  for(auto &it : v){cout<<i<<" " ;} cout<<endl;


    string removeKdigits(string num, int k) {
        stack<char>st;

        int n = num.length();

        for(int i = 0;i<n;i++){
            if(k <= 0){
                st.push(num[i]);
            }
            else if(st.empty()){
                st.push(num[i]);
            }
            else if(k > 0 && st.top() > num[i]){
                while(!st.empty() && st.top() > num[i] && k > 0){
                    st.pop();
                    k--;
                }
                st.push(num[i]);
            }
            else {
                st.push(num[i]);
            }
        }
        while(k > 0){
            st.pop();
            k--;
        }

        string ans = "";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(),ans.end());

        int i = 0;
        if(ans == ""){
            return "0";
        }

        while(ans[i] == '0'){
            i++;
        }

        string res = ans.substr(i,n - i + 1);

        if(res == ""){
            return "0";
        }
        return res;



    }
void solve(){
   string num;
   cin>>num;

   int k;
   cin >> k;

    cout<<removeKdigits(num,k);


}


int main(){
    // ll t;
    // cin >> t;

    // while(t--){
        solve();
    // }
}