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
        int c = 0;
        for(int i = 1; i <= n; i++){
            if(a[i] == 1){
                c++;
            }
        }
        if(c == k){
            return true;
        }
        else{
            return false;
        }
    }
    void in(int n, int a[]){
        for(int i = 1; i <= n; i++){
            cout << a[i] << "";
        }
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n, k;
            cin >> n >> k;
            int a[1001] = {0};
            while(ok){
                if(check(n, a, k)){
                    in(n, a);
                    cout << endl;
                }
                sinh(n, a);
            }
            ok = 1;
        }
    }