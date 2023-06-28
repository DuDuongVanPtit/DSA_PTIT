#include <bits/stdc++.h> 
    using namespace std;
    int ok = 1;
    void sinh(int n, int a[]){
        int i = n;
        while(i >= 1 && a[i] == 1){
            a[i] = 0;
            i--;
        }
        a[i] = 1;
        if(i == 0){
            ok = 0;
        }
    }
    bool check(int n, int a[], int k){
        int c = 0, ok = 0;
        for(int i = 1; i <= n; i++){
            if(a[i] == 0){
                c++;
                if(c == k){
                    ok++;
                }
                if(c > k){
                    return false;
                }
            }
            else{
                c = 0;
            }
        }
        if(ok == 1){
            return true;
        }
        return false;
    }
    void in(int n, int a[]){
        for(int i = 1; i <= n; i++){
            if(a[i]){
                cout << "B";
            }
            else{
                cout << "A";
            }
        }
    }
    int main(){
        int n, k;
        cin >> n >> k;
        int a[1001] = {0};
        int dem = 0;
        while(ok){
            if(check(n, a, k)){
                dem++;
            }
            sinh(n, a);
        }
        cout << dem << endl;
        ok = 1;
        for(int i = 0; i <= 1000; i++){
            a[i] = 0;
        }
        while(ok){
            if(check(n, a, k)){
                in(n, a);
                cout << endl;
            }
            sinh(n, a);
        }
    }