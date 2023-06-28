#include <bits/stdc++.h>

    using namespace std;
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            int a[n];
            for(int i = 0; i < n; i++){
                cin >> a[i];
            }
            int min_val1 = 1e9 + 7;
            for(int i = 0; i < n; i++){
                if(a[i] < min_val1){
                    min_val1 = a[i];
                }
            }
            map <int, int> mp;
            mp[min_val1] = 1;
            int min_val2 = 1e9 + 7;
            int ok = 0;
            for(int i = 0; i < n; i++){
                if(mp[a[i]] == 0){
                    if(a[i] < min_val2){
                        ok = 1;
                        min_val2 = a[i];
                    }
                }
            }
            if(ok){
                cout << min_val1 << " " << min_val2 << endl;
            }
            else{
                cout << "-1\n";
            }
        }
    }