#include <bits/stdc++.h>
    using namespace std;
    using ll = long long;
    int main(){
        int t; cin >> t;
        while(t--){
            int n; cin >> n;
            ll a[n];
            for(int i = 0; i < n; i++){
                cin >> a[i];
            }
            stack <pair<ll, ll>> st;
            ll left[n], right[n];
            for(int i = n - 1; i >= 0; i--){
                while(!st.empty() && st.top().second >= a[i]){
                    st.pop();
                }
                if(st.empty()){
                    left[i] = n;
                }
                else{
                    left[i] = st.top().first;
                }
                st.push({i, a[i]});
            }
            while(!st.empty()){
                st.pop();
            }
            stack <pair<ll, ll>> st1;
            for(int i = 0; i < n; i++){
                while(!st1.empty() && st1.top().second >= a[i]){
                    st1.pop();
                }
                if(st1.empty()){
                    right[i] = -1;
                }
                else{
                    right[i] = st1.top().first;
                }
                st1.push({i, a[i]});
            }
            while(!st1.empty()){
                st1.pop();
            }
            ll max_val = 0;
            for(int i = 0; i < n; i++){
                max_val = max(max_val, (left[i] - right[i] - 1) * a[i]);
            }
            cout << max_val << endl;
        }
    }