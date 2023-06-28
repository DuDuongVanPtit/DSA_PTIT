#include <bits/stdc++.h>

    using namespace std;
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n, k; 
            cin >> n >> k;
            int a[n + 1];
            for(int i = 1; i <= n; i++){
                cin >> a[i];
            }
            for(int i = 1; i <= n - k + 1; i++){
                int max_val = -1e9 + 7;
                int j = i;
                int cnt = 0;
                while(cnt < k){
                    max_val = max(max_val, a[j]);
                    j++;
                    cnt++;
                }
                cout << max_val << " ";
            }
            cout << endl;
        }
    }