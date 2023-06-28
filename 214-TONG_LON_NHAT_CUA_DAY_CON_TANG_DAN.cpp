#include <bits/stdc++.h> 
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            vector <int> a(n);
            for(int &x : a){
                cin >> x;
            }
            int ans = 0;
            vector <int> f(a.begin(), a.end());
            ans = max(ans, f[0]);
            for(int i = 1; i < n; i++){
       n         int max_val = 0;
                for(int j = 0; j < i; j++){
                    if(a[j] < a[i]){
                        max_val = max(max_val, f[j]);
                    }
                }
                f[i] += max_val;
                ans = max(ans, f[i]);
            }
            cout << ans << endl;
        }
        
    }