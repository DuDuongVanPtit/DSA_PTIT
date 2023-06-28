#include <bits/stdc++.h>
using namespace std;
    int n, k;
    int a[1001], b[1001];
    int c = 0;
    void in(){
        for(int i = 1; i <= n; i++){
            if(a[i]){
                cout << b[i] << " ";
            }
        }
        cout << endl;
    }
    bool check(){
        int sum = 0;
        for(int i = 1; i <= n; i++){
            if(a[i]){
                sum += b[i];
            }
        }
        if(sum == k){
            return true;
        }
        else{
            return false;
        }
    }
    int ok = 1;
    void sinh(){
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
    int main(){
        cin >> n >> k;
        for(int i = 1; i <= n; i++){
            cin >> b[i];
        }
        while(ok){
            if(check()){
                c++;
                in();
            }
            sinh();
        }
        cout << c << endl;
    }