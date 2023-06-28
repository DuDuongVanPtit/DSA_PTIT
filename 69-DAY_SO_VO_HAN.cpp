#include <bits/stdc++.h>
    using namespace std;
    using ll = long long;
    ll mod = 1e9 + 7;
    struct matrix{
        ll a[2][2];
        matrix operator * (matrix b){
            matrix res;
            for(int i = 0; i < 2; i++){
                for(int j = 0; j < 2; j++){
                    res.a[i][j] = 0;
                    for(int k = 0; k < 2; k++){
                        res.a[i][j] = (res.a[i][j] % mod + (a[i][k] % mod * b.a[k][j] % mod) % mod) % mod;
                    }
                }
            }
            return res;
        }
    };
    ll powmode(matrix f, ll n){
        matrix res = f;
        while(n){
            if(n % 2 == 1){
                res = res * f;
            }
            f = f * f;
            n /= 2;
        }
        return res.a[1][1];
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            ll n;
            cin >> n;
            matrix f;
            f.a[0][0] = 1; f.a[0][1] = 1; f.a[1][0] = 1; f.a[1][1] = 0;
            int tmp = powmode(f, n);
            cout << tmp << endl;
        }
    }