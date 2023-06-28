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
    void in(int n, int a[]){
        for(int i = 1; i <= n; i++){
            if(a[i]){
                cout << "B";
            }
            else{
                cout << "A";
            }
        }
        cout << " ";
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            int a[1001] = {0};
            while(ok){
                in(n, a);
                sinh(n, a);
            }
            ok = 1;
            cout << endl;
        }
    }