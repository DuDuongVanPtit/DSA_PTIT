#include <bits/stdc++.h>
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n, k; cin >> n >> k;
            long long a[n];
            map <long long, long long> mp;
            for(long long &x : a){
                cin >> x;
                mp[x]++;
            }
            sort(a, a + n);
            long long ans = 0;
            for(int i = 0; i < n; i++){
                auto it = lower_bound(a + i + 1, a + n, k - a[i]);
                if(it != a + n && *it == k - a[i]){
                    if(mp[k - a[i]]){
                        if(a[i] * 2 == k){
                            mp[a[i]]--;
                        }
                        ans += mp[k - a[i]];
                    }
                }
            }
            cout << ans << endl;
        }
    }