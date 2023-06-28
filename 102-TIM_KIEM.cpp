#include <bits/stdc++.h>

    using namespace std;
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n, k;
            cin >> n >> k;
            int a[n];
            map <int, int> mp;
            int ok = 1;
            for(int i = 0; i < n; i++){
                cin >> a[i];
                mp[a[i]] = 1;
            }
            if(mp[k] == 1){
                cout << "1";
            }
            else{
                cout << "-1";
            }
            cout << endl;
        }
    }