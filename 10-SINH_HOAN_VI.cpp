#include <bits/stdc++.h>

    using namespace std;
   
    void khoitao(int n, int a[]){
        for(int i = 1; i <= n; i++){
            a[i] = i;
        }
    }
    void in(int n, int a[]){
        for(int i = 1; i <= n; i++){
            cout << a[i] << "";
        }
        cout << " ";
    }
    int ok = 1;
    void sinh(int n, int a[]){
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
        int t;
        cin >> t;
        while(t--){
            int a[11] = {0};
            int n;
            cin >> n;
            khoitao(n, a);
            while(ok){
                in(n, a);
                sinh(n, a);
            }
            cout << endl;
            ok = 1;
        }
        
    }