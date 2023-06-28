#include <bits/stdc++.h> 
    using namespace std;
    int f[100005];
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n, k;
            cin >> n >> k;
            int mod = 1e9 + 7;
            f[1] = 1;
            for(int i = 2; i <= k; i++){
                for(int j = 1; j < i; j++){
                    f[i] += f[j];
                    f[i] %= mod;
                }
                f[i] += 1;
            }
            for(int i = k + 1; i <= n; i++){
                for(int j = i - k; j < i; j++){
                    f[i] += f[j];
                    f[i] %= mod;
                }
            }
            cout << f[n] << endl;
            memset(f, 0, sizeof(f));
        }
    }