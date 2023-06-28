#include <bits/stdc++.h>

    using namespace std;
    
    int main(){
        int m, n;
        cin >> m >> n;
        int a[m], b[n];
        for(int &x : a){
            cin >> x;
        }
        for(int &x : b){
            cin >> x;
        }
        int max_val = INT_MIN, min_val = INT_MAX;
        for(int x : a){
            max_val = max(max_val, x);
        }
        for(int x : b){
            min_val = min(min_val, x);
        }
        long long ans = 1ll * min_val * max_val;
        cout << ans << endl;
    }