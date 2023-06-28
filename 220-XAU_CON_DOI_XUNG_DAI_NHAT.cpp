#include <bits/stdc++.h>
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            string a;
            cin >> a;
            char tmp[a.size() + 1];
            tmp[0] = '*';
            int n = a.size();
            for(int i = 1; i <= n; i++){
                tmp[i] = a[i - 1];
            }
            bool f[n + 1][n + 1]; memset(f, false, sizeof(f));
            for(int i = 1; i <= n; i++){
                f[i][i] = 1;
            }
            for(int i = 1; i <= n; i++){
                for(int j = i + 1; j <= n; j++){
                    if(i == 1){
                        if(tmp[j - i] == tmp[j]){
                            f[j - i][j] = true;
                        }
                    }
                    else{
                        if(tmp[j - i] == tmp[j] && f[j - i + 1][j - 1] == true){
                            f[j - i][j] = true;
                        }
                    }
                }
            }
            int ans = 1;
            for(int i = 1; i <= n; i++){
                for(int j = i + 1; j <= n; j++){
                    if(f[i][j]){
                        ans = max(ans, j - i + 1);
                    }
                }
            }
            cout << ans << endl;
        }
    }