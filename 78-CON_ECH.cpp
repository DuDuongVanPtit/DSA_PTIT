#include <bits/stdc++.h> 
    using namespace std;
    long long f[100005];
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            f[1] = 1;
            for(int i = 2; i <= 3; i++){
                for(int j = 1; j < i; j++){
                    f[i] += f[j];
                }
                f[i] += 1;
            }
            for(int i = 4; i <= n; i++){
                for(int j = i - 3; j < i; j++){
                    f[i] += f[j];
                }
            }
            cout << f[n] << endl;
            memset(f, 0, sizeof(f));
        }
    }