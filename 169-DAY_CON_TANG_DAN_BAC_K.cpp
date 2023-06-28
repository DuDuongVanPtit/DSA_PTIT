#include <bits/stdc++.h>

    using namespace std;
    void khoitao(int k, int a[]){
        for(int i = 1; i <= k; i++){
            a[i] = i;
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
    bool check(int k, int a[], int ans[]){
        for(int i = 2; i <= k; i++){
            if(ans[a[i]] < ans[a[i - 1]]){
                return false;
            }
        }
        return true;
    }
    int main(){
        int cnt = 0;
        int n, k;
        int a[1001] = {0};
        cin >> n >> k;
        int ans[1001];
        for(int i = 1; i <= n; i++){
            cin >> ans[i];
        }
        khoitao(k, a);
        while(ok){
            if(check(k, a, ans)){
                cnt++;
            }
            sinh(n, k, a);
        }
        cout << cnt << endl;
    }