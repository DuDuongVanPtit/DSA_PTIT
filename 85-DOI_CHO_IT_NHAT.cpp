#include <bits/stdc++.h>
    using namespace std;
    
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            int a[n];
            int ans = 0;
            for(int i = 0; i < n; i++){
                cin >> a[i];
            }
            for(int i = 0; i < n; i++){
                int j = 0;
                int min_val = INT_MAX;
                for(int k = i + 1; k < n; k++){
                    if(a[k] < min_val){
                        min_val = a[k];
                        if(min_val < a[i]){
                            j = k;
                        }
                    }
                }
                if(j != 0){
                    swap(a[i], a[j]);
                    ans++;
                }
            }
            cout << ans << endl;
        }
    }