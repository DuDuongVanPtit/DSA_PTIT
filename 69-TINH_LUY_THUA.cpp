#include <bits/stdc++.h>
    using namespace std;
    using ll = long long;
    ll mod = 1e9 + 7;
    ll powmod(ll a, ll b){
        ll res = 1;
        while(b){
            if(b % 2 == 1){
                res = ((res % mod) * (a % mod)) % mod;
            }
            a = ((a % mod) * (a % mod)) % mod;
            b /= 2;
        }
        return res;
    }
    int main(){
        while(1){
            ll a, b;
            cin >> a >> b;
            if(a == 0 && b == 0){
                return 0;
            }
            cout << powmod(a, b) << endl;
        }
    }