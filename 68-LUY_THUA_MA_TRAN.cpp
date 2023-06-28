#include <bits/stdc++.h>
    using namespace std;
    using ll = long long;
    ll mod = 1e9 + 7;
    struct matrix{
        ll a[10][10];
        ll n;
        matrix operator * (matrix b){
            matrix res;
            res.n = n;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    res.a[i][j] = 0;
                    for(int k = 0; k < n; k++){
                        res.a[i][j] = (res.a[i][j] % mod + (a[i][k] % mod * b.a[k][j] % mod) % mod) % mod;
                    }
                }
            }
            return res;
        }
    };
    ll powmod(matrix f, ll k){
        k -= 1;
        matrix res = f;
        while(k){
            if(k % 2 == 1){
                res = res * f;
            }
            f = f * f;
            k /= 2;
        }
        ll ans = 0;
        for(int i = 0; i < f.n; i++){
            ans += res.a[i][f.n - 1];
            ans %= mod;
        }
        return ans;
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            ll n, k;
            cin >> n >> k;
            matrix f;
            f.n = n;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    cin >> f.a[i][j];
                }
            } 
            cout << powmod(f, k) << endl;
        }
    }