#include <bits/stdc++.h> 
    using namespace std;
    using ll = long long;
    int Find(ll n, ll k){
        if(k == pow(2, n - 1)){
           return n;
        }
        else{
            if(k > pow(2, n - 1)){
                return Find(n - 1, k - pow(2, n - 1));
            }
            else{
                return Find(n - 1, k);
            }
        }
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            ll n, k;
            cin >> n >> k;
            cout << Find(n, k) << endl;
        }
    }