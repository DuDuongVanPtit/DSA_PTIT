#include <bits/stdc++.h> 
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n; 
            cin >> n;
            vector <int> v(n);
            for(int &x : v){
                cin >> x;
            }
            int f[n] = {0};
            if(n == 1){
                cout << v[0] << endl;
            }
            else{
                f[0] = v[0];
                f[1] = v[1];
                if(f[1] < f[0]){
                    f[1] = f[0];
                }
                for(int i = 2; i < n; i++){
                    f[i] = max(f[i - 2] + v[i], f[i - 1]);
                }
                cout << f[n - 1] << endl;
            }
        }
    }