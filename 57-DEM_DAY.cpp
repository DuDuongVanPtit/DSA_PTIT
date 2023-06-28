#include <bits/stdc++.h>    
    using namespace std;
    using ll = long long;

    ll powmod(ll a, ll b, ll mod){
        ll ans = 1;
        while(b != 0){
            if(b % 2 == 1){
                ans = ((ans % mod) * (a % mod)) % mod;
            }
            a = ((a % mod) * (a % mod)) % mod;
            b /= 2;
        }
        return ans;
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            ll n, mod;
            cin >> n;
            mod = 123456789;
            cout << powmod(2, n - 1, mod) << endl;
        }
    }