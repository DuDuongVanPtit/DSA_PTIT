#include <bits/stdc++.h> 
    using namespace std;
    long long fibo[100];
    void solve(){
        fibo[1] = 1;
        fibo[2] = 1;
        for(int i = 3; i <= 92; i++){
            fibo[i] = fibo[i - 1] + fibo[i - 2];
        }
    }
    int ans(long long n, long long k){
        if(n == 1){
            return 0;
        }
        else if(n == 2){
            return 1;
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
            long long n, k;
            cin >> n >> k;
            if(ans(n, k) == 0){
                cout << "0";
            }
            else{
                cout << "1";
            }
            cout << endl;
        }
    }