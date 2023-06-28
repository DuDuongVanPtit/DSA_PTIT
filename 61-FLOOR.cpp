#include <bits/stdc++.h>
    using namespace std;
    using ll = long long;

    ll ans(int n, ll a[], ll k){
        int l = 0, r = n - 1;
        int ans = 0;
        while(l <= r){
            int mid = (l + r) / 2;
            if(a[mid] <= k){
                ans = mid;
                l = mid + 1;
            }
            else{
                r = mid - 1;
            }
        }
        return ans + 1;
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            ll k;
            cin >> n >> k;
            ll a[n];
            for(int i = 0; i < n; i++){
                cin >> a[i];
            }
            if(k < a[0]){
                cout << "-1" << endl;
            }
            else{
                cout <<  ans(n , a, k) << endl;
            }
        }
    }