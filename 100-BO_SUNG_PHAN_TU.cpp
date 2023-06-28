#include <bits/stdc++.h>

    using namespace std;

    using ll = long long;
    
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            int a[n];
            map <int, int> mp;
            for(int &x : a){
                cin >> x;
                mp[x] = 1;
            }
            int min_val = 1e9 + 7, max_val = -1e9 + 7;
            for(int i = 0; i < n; i++){
                min_val = min(min_val, a[i]);
                max_val = max(max_val, a[i]);
            }
            int dem = 0;
            for(int i = min_val; i <= max_val; i++){
                if(mp[i] == 0){
                    dem++;
                }
            }
            cout << dem << endl;
        }
        
    }