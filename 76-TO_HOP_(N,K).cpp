#include <bits/stdc++.h> 
    using namespace std;
    int tohop[1005][1005];
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n, k;
            cin >> n >> k;
            int mod = 1e9 + 7;
            for(int i = 1; i <= n; i++){
                for(int j = 0; j <= i; j++){
                    if(j == 0 || j == i){
                        tohop[i][j] = 1;
                    }
                    else{
                        tohop[i][j] = tohop[i - 1][j - 1] + tohop[i - 1][j];
                    }
                    tohop[i][j] %= mod;
                }
            }
            cout << tohop[n][k] << endl;
            memset(tohop, 0, sizeof(tohop));
        }
    }