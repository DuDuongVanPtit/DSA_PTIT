#include <bits/stdc++.h>
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n, add, del, cop;
            cin >> n >> add >> del >> cop;
            int f[n + 1] = {0};
            f[0] = 0;
            f[1] = add;
            if(add > cop){
                f[2] = f[1] + cop;
            }
            else{
                f[2] = f[1] + add;
            }
            for(int i = 3; i <= n; i++){
                if(i % 2 == 0){
                    f[i] = min(f[i / 2] + cop, f[i - 1] + add);
                } 
                else{
                    f[i] = min(min(f[i / 2] + cop + add, f[i - 1] + add), f[(i + 1) / 2] + cop + del);
                }
            }
            cout << f[n] << endl;
        }
    }