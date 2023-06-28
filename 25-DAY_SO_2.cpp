#include <bits/stdc++.h>

    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            int i = 0;
            int a[n], b[n][n], tmp[n];;
            for(int &x : a){
                cin >> x;
                tmp[i++] = x;
            }
            for(int i = 0; i < n; i++){
                int x[n - i - 1];
                for(int j = 0; j < n - i - 1; j++){
                    x[j] = a[j] + a[j + 1];
                }
                for(int j = 0; j < n - i - 1; j++){
                    a[j] = x[j];
                }
                for(int k = 0; k < n - i - 1; k++){
                    b[i][k] = a[k];
                }
            }
            for(int i = n - 1; i >= 0; i--){
                for(int j = 0; j < n - i - 1; j++){
                    if(j == 0){
                        cout << "[";
                    }
                    cout << b[i][j];
                    if(j < n - i - 2){
                        cout << " ";
                    }
                    if(j == n - i - 2){
                        cout << "] ";
                    }

                }
            }
            for(int i = 0; i < n; i++){
                if(i == 0){
                    cout << "[";
                }
                cout << tmp[i];
                if(i < n - 1){
                    cout << " ";
                }
                if(i == n - 1){
                    cout << "]";
                }
                // if(i == n - 2){
                //     cout << " ";
                // }
            }
            cout << endl;
        }
    } 