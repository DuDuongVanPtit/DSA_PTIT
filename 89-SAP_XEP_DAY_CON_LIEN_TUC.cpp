#include <bits/stdc++.h>
    using namespace std;
    
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            int a[n + 1];
            for(int i = 1; i <= n; i++){
                cin >> a[i];
            }
            int max_val = INT_MIN, min_val = INT_MAX;
            int r = 0;
            for(int i = 1; i <= n; i++){
                if(a[i] > max_val){
                    max_val = a[i];
                }
                if(a[i] < max_val){
                    r = i;
                }
            }
            int l = 0;
            for(int i = 2; i <= r; i++){
                if(a[i] < a[i - 1]){
                    if(a[i] < min_val){
                        min_val = a[i];
                    }
                }
            }
            for(int i = 1; i <= r; i++){
                if(a[i] > min_val){
                    l = i;
                    break;
                }
            }
            cout << l << " " << r << endl;
        }
    }