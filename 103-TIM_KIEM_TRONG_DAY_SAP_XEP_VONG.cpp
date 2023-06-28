#include <bits/stdc++.h>

    using namespace std;
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n, k;
            cin >> n >> k;
            int a[n];
            for(int &x : a){
                cin >> x;
            }
            for(int i = 0; i < n; i++){
                if(a[i] == k){
                    cout << i + 1 << "";
                    break;
                }
            }
            cout << endl;
        }
    }