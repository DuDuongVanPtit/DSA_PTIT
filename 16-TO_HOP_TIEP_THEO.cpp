#include <bits/stdc++.h>

    using namespace std;
    
    bool check(int n, int k, int a[]){
        for(int i = k; i >= 1; i--){
            if(a[i] < n - k + i){
                return false;
            }
        }
        return true;
    }
    void in(int n, int k, int a[]){
        int i = k;
        while(i >= 1 && a[i] >= n - k + i){
            i--;
        }
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }
    }
    
    int main(){
        int t; 
        cin >> t;
        while(t--){
            int c[100] = {0};
            int dem = 0;
            int n, k;
            int a[1001] = {0};
            cin >> n >> k;
            for(int i = 1; i <= k; i++){
                cin >> a[i];
                c[a[i]] = 1;
            }
            if(check(n, k, a)){
                cout << k << "";
            }
            else{
                in(n, k, a);
                for(int i = 1; i <= k; i++){
                    if(c[a[i]] == 0){
                        dem++;
                    }
                }
                cout << dem << "";
            }
            cout << endl;
        }
        
    }