#include <bits/stdc++.h> 
    using namespace std;
    using ll = long long;
    ll mod = 1e9 + 7;
    ll Pow(ll a, ll b){
        ll ans = 1;
        while(b != 0){
            if(b % 2 == 1){
                ans = (ans % mod * a % mod) % mod;
            }
            a = (a % mod * a % mod) % mod;
            b /= 2;
        }
        return ans;
    }
    
    int main(){
        int t;
        cin >> t;
        while(t--){
            ll n;
            cin >> n;
            ll dao = 0, tmp = n;
            while(tmp){
                dao = dao * 10 + tmp % 10;
                tmp /= 10;
            }
            cout << Pow(n, dao) << endl;
        }
    }