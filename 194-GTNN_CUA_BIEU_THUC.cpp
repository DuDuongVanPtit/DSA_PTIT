#include <bits/stdc++.h> 
    using namespace std;
    using ll = long long;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            ll a[n], b[n];
            for(ll &x : a) cin >> x;
            for(ll &y : b) cin >> y;
            ll sum = 0;
            sort(a, a + n); sort(b, b + n, greater <int>());
            for(int i = 0; i < n; i++){
                sum += (a[i] * b[i]);
            }
            cout << sum << endl;
        }
    }