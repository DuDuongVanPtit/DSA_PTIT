#include <bits/stdc++.h> 
    using namespace std;

    int main(){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        int r2 = 1, r3 = 1, l2 = 1, l3 = 1;
        for(int i = 0; i < 2; i++){
            if(i <= 1){
                l2 *= a[i];
            }
            l3 *= a[i];
        }
        for(int i = n - 1; i >= n - 3; i--){
            r3 *= a[i];
            if(i >= n - 2){
                r2 *= a[i];
            }
        }
        int tmp = a[0] * a[1] * a[n - 1];
        int max_val = max(max(r2, r3), max(l2, l3));
        cout << max(max_val, tmp) << endl;
    }