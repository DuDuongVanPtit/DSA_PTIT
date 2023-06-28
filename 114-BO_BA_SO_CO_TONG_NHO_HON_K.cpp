#include <bits/stdc++.h>
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            long long n, k; cin >> n >> k;
            long long a[n];
            for(long long &x : a){
                cin >> x;
            }
            sort(a, a + n);
            long long ans = 0;
            for(int i = 0; i < n; i++){
                for(int j = i + 1; j < n; j++){
                    long long sum = k - (a[i] + a[j]);
                    auto it = lower_bound(a + j + 1, a + n, sum);
                    ans += it - (a + j + 1);
                }
            }
            cout << ans << endl;
        }
    }