#include <bits/stdc++.h>
    using namespace std;
    using ll = long long;
    long long fibo[100];
    void solve(){
        fibo[1] = 1; fibo[2] = 1;
        for(int i = 3; i <= 92; i++){
            fibo[i] = fibo[i - 1] + fibo[i - 2];
        }
    }
    int ans(ll n, ll k){
        if(n == 1){
            return 1;
        }
        else if(n == 2){
            return 2;
        }
        if(k <= fibo[n - 2]){
            return ans(n - 2, k);
        }
        else{
            return ans(n - 1, k - fibo[n - 2]);
        }
    }
    int main(){
        solve();
        int t;
        cin >> t;
        while(t--){
            ll n, k;
            cin >> n >> k;
            if(ans(n, k) == 1){
                cout << "0";
            }
            else{
                cout << "1";
            }
            cout << endl;
        }
    }