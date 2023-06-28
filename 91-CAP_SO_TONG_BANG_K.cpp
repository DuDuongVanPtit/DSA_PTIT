#include <bits/stdc++.h>
    using namespace std;
    
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n, k;
            cin >> n >> k;
            int a[n];
            int c[10000] = {0};
            for(int i = 0; i < n; i++){
                cin >> a[i];
                c[a[i]]++;
            }
            int dem = 0;
            for(int i = 0; i < n; i++){
                if(k >= a[i]){
                    dem += c[k - a[i]];
                    if(a[i] * 2 == k){
                        dem--;
                    }
                }
            }
            cout << dem / 2 << endl;
        }
    }