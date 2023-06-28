#include <bits/stdc++.h>
    using namespace std;
    //f[i][j] = max(f[i- 1][j], f[i - 1][j - w[i]] + w[i])
    int main(){
        int c, n;
        cin >> c >> n;
        vector <int> a(n);
        int f[n + 1][c + 1];
        memset(f, 0, sizeof(f));
        for(int &x : a){
            cin >> x;
        }
        sort(a.begin(), a.end(), greater <int>());
        for(int i = a[0]; i <= c; i++){
            f[1][i] = a[0];
        }
        for(int i = 2; i <= n; i++){
            for(int j = a[i - 1]; j <= c; j++){
                f[i][j] = max(f[i - 1][j], f[i - 1][j - a[i - 1]] + a[i - 1]);
            }
        }
        cout << f[n][c] << endl;
    }