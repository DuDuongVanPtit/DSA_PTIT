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
            int min_val = 1e9 + 7;
            for(int i = 0; i < n; i++){
                for(int j = i + 1; j < n; j++){
                    int tmp  = a[i] + a[j];
                    if(abs(tmp) < abs(min_val)){
                        min_val = tmp;
                    }
                }
            }
            cout << min_val << endl;
        }
    }