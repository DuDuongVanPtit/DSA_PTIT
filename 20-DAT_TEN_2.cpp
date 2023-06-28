#include <bits/stdc++.h>

    using namespace std;
    void khoitao(int k, int a[]){
        for(int i = 1; i <= k; i++){
            a[i] = i;
        }
    }
    void in(int k, int a[], string s){
        for(int i = 1; i <= k; i++){
            cout << s[a[i]] << "";
        }
    }
    int ok = 1;
    void sinh(int n, int k, int a[]){
        int i = k;
        while(i >= 1 && a[i] >= n - k + i){
            i--;
        }
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }
        if(i == 0){
            ok = 0;
        }
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            string s = " ";
            int n, k;
            int a[1001] = {0};
            cin >> n >> k;
            for(int i = 1; i <= n; i++){
                s += (i + 64);
            }
            khoitao(k, a);
            while(ok){
                in(k, a, s);
                cout << endl;
                sinh(n, k, a);
            }
            ok = 1;
        }
        
    }