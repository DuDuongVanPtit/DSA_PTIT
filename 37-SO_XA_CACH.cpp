#include <bits/stdc++.h> 
    using namespace std;
    bool check(int n, int a[]){
        for(int i = 1; i < n; i++){
            if(a[i] - a[i + 1] == 1 || a[i + 1] - a[i] == 1){
                return false;
            }
        }
        return true;
    }

    void Try(int j, int n, int a[], bool used[]){
        for(int i = 1; i <= n; i++){
            if(used[i] == false){
                a[j] = i;
                used[i] = true;
                if(j == n){
                    if(check(n, a)){
                        for(int k = 1; k <= n; k++){
                            cout << a[k];
                        }
                        cout << endl;
                    }
                }
                else{
                    Try(j + 1, n, a, used);
                }
                used[i] = false;
            }
        }
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            int a[15];
            bool used[15] = {0};
            Try(1, n, a, used);
        }
    }