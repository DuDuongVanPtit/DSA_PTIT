#include <bits/stdc++.h>
    using namespace std;
    int f[1005][1005];
    int main(){
        int t;
        cin >> t;
        while(t--){
            string a, b;
            cin >> a >> b;
            
            for(int i = 1; i <= a.size(); i++){
                for(int j = 1; j <= b.size(); j++){
                    if(b[j - 1] == a[i - 1]){
                        f[i][j] = f[i - 1][j - 1] + 1;
                    }
                    else{
                        f[i][j] = max(f[i][j - 1], f[i - 1][j]);
                    }
                }
            }
            cout << f[a.size()][b.size()] << endl;
            memset(f, 0, sizeof(f));
        }
    }