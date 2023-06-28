#include <bits/stdc++.h>

    using namespace std;
    int n;
    int a[11], b[11];
    void khoitao(){
        for(int i = 1; i <= n; i++){
            a[i] = i;
        }
    }
    void in(){
        for(int i = 1; i <= n; i++){
            cout << b[a[i]] << " ";
        }
        cout << endl;
    }
    int ok = 1;
    void sinh(){
        int i = n - 1;
        while(i >= 1 && a[i] > a[i + 1]){
            i--;
        }
        if(i == 0){
            ok = 0;
        }
        int j = n;
        while(a[j] < a[i]){
            j--;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
    int main(){
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> b[i];
        }
        sort(b, b + n + 1);
        khoitao();
        while(ok){
            in();
            sinh();
        }
    }