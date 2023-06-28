#include <bits/stdc++.h>
    using namespace std;
    int c[1000005];
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n, k;
            cin >> n >> k;
            int a[n];
            for(int i = 0; i < n; i++){
                cin >> a[i];
                c[a[i]]++;
            }
            if(c[k]){
                cout << c[k] << endl;
            }
            else{
                cout << "-1" << endl;
            }
            for(int i = 0; i <= 1000000; i++){
                c[i] = 0;
            }
        }
    }