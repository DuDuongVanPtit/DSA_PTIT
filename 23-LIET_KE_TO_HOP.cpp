#include <bits/stdc++.h>

    using namespace std;
    void khoitao(int k, int a[]){
        for(int i = 1; i <= k; i++){
            a[i] = i;
        }
    }
    void in(int k, int a[], int x[]){
        for(int i = 1; i <= k; i++){
            cout << x[a[i]] << " ";
        }
        cout << endl;
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
            int n, k;
            int a[1001] = {0};
            cin >> n >> k;
            set <int> se;
            int x[n + 1], ans[n + 1];
            ans[0] = 0;
            for(int i = 1; i <= n; i++){
                cin >> x[i];
                se.insert(x[i]);
            }  
            int i = 1;
            for(int x : se){    
                ans[i++] = x;
            }
            khoitao(k, a);
            while(ok){
                in(k, a, ans);
                sinh(se.size(), k, a);
            }
            cout << endl;
    }