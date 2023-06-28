#include <bits/stdc++.h>

    using namespace std;
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            int a[n];
            for(int &x : a){
                cin >> x;
            }
            sort(a, a + n);
            int min_val = 1e9 + 7;
            for(int i = 0; i < n - 1; i++){
                min_val = min(min_val, abs(a[i + 1] - a[i]));
            }
            cout << min_val << endl;
        }
        
    }