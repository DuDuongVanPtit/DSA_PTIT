#include <bits/stdc++.h> 

    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            long long a[n + 1];
            long long F[n + 1];
            
            for(int i = 1; i <= n; i++){
                cin >> a[i];
            }
            a[0] = 0;
            F[0] = 0; F[1] = a[1];
            for(int i = 2; i <= n; i++){
                F[i] = F[i - 1] + a[i];
            }
            long long max_val = -1e9 + 7;
            for(int i = 1; i <= n; i++){
                for(int j = i + 1; j <= n; j++){
                    long long tmp = F[j] - F[i - 1];
                    max_val = max(max_val, max(tmp, a[i]));
                }
            }
            cout << max_val << endl;
        }
    }