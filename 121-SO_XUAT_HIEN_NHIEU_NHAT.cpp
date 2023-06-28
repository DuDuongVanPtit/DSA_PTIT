#include <bits/stdc++.h>

    using namespace std;
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            int a[n];
            map <int, int> mp;
            int max_val = -1e9 + 7;
            for(int &x : a){
                cin >> x;
                mp[x]++;
            }
            int ok = 1;
            int tmp;
            for(int i = 0; i < n; i++){
                if(mp[a[i]] > n/2 && mp[a[i]] > max_val){
                    ok = 0;
                    max_val = mp[a[i]];
                    tmp = a[i];
                }
            }
            if(ok){
                cout << "NO" << endl;
            }
            else{
                cout << tmp << endl;
            }
        }
        
    }