#include <bits/stdc++.h>
    using namespace std;
    int main(){
        int t; cin >> t;
        while(t--){
            int n, k; cin >> n >> k;
            int a[n];
            for(int i = 0; i < n; i++){
                cin >> a[i];
            }
            int ok = 0;
            sort(a, a + n);
            for(int i = 0; i < n; i++){
                for(int j = i + 1; j < n; j++){
                    int sum = k - a[i] - a[j];
                    auto it = lower_bound(a + j + 1, a + n, sum);
                    if(*it == sum){
                        ok = 1;
                        break;
                    }
                }
            }
            if(ok){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }