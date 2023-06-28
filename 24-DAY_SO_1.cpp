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
            for(int i = 0; i < n; i++){
                if(i == 0){
                    cout << "[";
                }
                cout << a[i];
                if(i < n - 1){
                    cout << " ";
                }
                if(i == n - 1){
                    cout << "]\n";
                }
            }
            for(int i = 0; i < n; i++){
                int x[n - i - 1];
                for(int j = 0; j < n - i + 1; j++){
                    x[j] = a[j] + a[j + 1];
                }
                for(int j = 0; j < n - i + 1; j++){
                    a[j] = x[j];
                }
                for(int k = 0; k < n - i - 1; k++){
                    if(k == 0){
                        cout << "[";
                    }
                    cout << a[k];
                    if(k < n - i - 2){
                        cout << " ";
                    }
                    if(k == n - i - 2){
                        cout << "]\n";
                    }
                }
            }
        }
    } 