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
    bool check(int n, int a[]){
        if(a[1] != 1 || a[n] != 0){
            return false;
        }
        else{
            int c = 0;
            for(int i = 1; i <= n; i++){
                if(a[i] == 1){
                    c++;
                    if(c == 2){
                        return false;
                    }
                }
                else{
                    c = 0;
                }
            }
        }
        return true;
    }
    void in(int n, int a[]){
        for(int i = 1; i <= n; i++){
            if(a[i]){
                cout << "H";
            }
            else{
                cout << "A";
            }
        }
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            int a[1001] = {0};
            while(ok){
                if(check(n, a)){
                    in(n, a);
                    cout << endl;
                }
                sinh(n, a);
            }
            ok = 1;
        }
    }