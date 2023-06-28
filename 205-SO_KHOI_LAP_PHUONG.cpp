#include <bits/stdc++.h>
    using namespace std;
    using ll = long long;
    int a[25];
    int ok = 0;
    ll max_val = -1e9 + 7;
    void in(string n){
        string s = "";
        for(int i = 1; i <= n.size(); i++){
            if(a[i] == 1){
                s += n[i - 1];
            }
        }
        if(s.size() != 0){
            ll ans = stoll(s);
            float y = pow(ans, 1/3.0);
            ll x = y;
            if(x == y){
                ok = 1;
                max_val = max(max_val, ans);
            }
        }
    }
    void Try(int i, string n){
        for(int j = 1; j >= 0; j--){
            a[i] = j;
            if(i == n.size()){
                in(n);
            }
            else{
                Try(i + 1, n);
            }
        }
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            string n;
            cin >> n;
            Try(1, n);
            if(ok == 0){
                cout << "-1";
            }
            else{
                cout << max_val;
            }
            ok = 0;
            max_val = -1e9 + 7;
            memset(a, 0, sizeof(a));
            cout << endl;  
        }
    }