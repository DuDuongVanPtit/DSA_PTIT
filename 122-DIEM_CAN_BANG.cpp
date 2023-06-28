#include <bits/stdc++.h>

    using namespace std;
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            int a[n], f[n];
            for(int &x : a){
                cin >> x;
            }
            f[0] = a[0];
            for(int i = 1; i < n; i++){
                f[i] = f[i - 1] + a[i];
            }
            int ok = 1;
            for(int i = 0; i < n - 2; i++){
                if(f[i] == f[n - 1] - f[i + 1]){
                    ok = 0;
                    cout << i + 2 << endl;
                    break;
                }
            }
            if(ok){
                cout << "-1\n";
            }
        }
        
    }