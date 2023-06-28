#include <bits/stdc++.h>
    using namespace std;
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n; cin >> n;
            long long a[n];
            for(long long &x : a){
                cin >> x;
            }
            sort(a, a + n);
            for(int i = 0; i < n; i++){
                a[i] = a[i] * a[i];
            }
            int ok = 0;
            for(int i = n - 1; i >= 2; i--){
                long long cmp = a[i];
                int r = i - 1, l = 0;
                while(l < r){
                    long long sum = a[l] + a[r];
                    if(sum < cmp){
                        l++;
                    }
                    else if(sum > cmp){
                        r--;
                    }
                    else{
                        ok = 1;
                        break;
                    }
                }
                if(ok){
                    break;
                }
            }
            if(ok){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }
        }
    }