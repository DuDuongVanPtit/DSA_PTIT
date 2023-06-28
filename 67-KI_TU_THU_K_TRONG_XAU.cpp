#include <bits/stdc++.h>
    using namespace std;
    using ll = long long;
    char a[26];
    void khoitao(){
        a[0] = 'A';
        for(int i = 1; i < 26; i++){
            a[i] = a[0] + i;
        }
    }
    int solve(ll n, ll k){
        if(k == pow(2, n - 1)){
            return n;
        }
        else{
            if(k > pow(2, n - 1)){
                return solve(n - 1, k - pow(2, n - 1));
                
            }
            else{
                return solve(n - 1, k);
            }
        }
    }
    int main(){
        khoitao();
        int t;
        cin >> t;
        while(t--){
            ll n, k;
            cin >> n >> k;
            cout << a[solve(n, k) - 1] << endl;
        }
    }