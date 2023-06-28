#include <bits/stdc++.h>
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n, k;
            cin >> n >> k;
            int a[n];
            for(int i = 0; i < n; i++){
                cin >> a[i];
            }
            int sum1 = 0, sum2 = 0;
            sort(a, a + n);
            if(n - k <= k){
                for(int i = 0; i < n; i++){
                    if(i < n - k){
                        sum1 += a[i];
                    }
                    else{
                        sum2 += a[i];
                    }
                }
            }
            else{
                for(int i = 0; i < n; i++){
                    if(i < k){
                        sum1 += a[i];
                    }
                    else{
                        sum2 += a[i];
                    }
                }
            }
            cout << sum2 - sum1 << endl;
        }
    }