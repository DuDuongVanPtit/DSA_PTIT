#include <bits/stdc++.h> 
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n; 
            cin >> n;
            long long sum = 0;
            int a[n];
            for(int i = 0; i < n; i++){
                cin >> a[i];
            }
            int mod = 1e9 + 7;
            sort(a, a + n);
            for(int i = 0; i < n; i++){
                sum += 1ll*a[i]*i;
                sum %= mod;
            }
            cout << sum << endl;
        }
    }