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
            int c1 = 0, c2 = 0;
            for(int i = 1; i <= n; i++){
                if(a[i] == 1){
                    c1++;
                    if(c1 == 2){
                        return false;
                    }
                }
                else{
                    c1 = 0;
                }
                if(a[i] == 0){
                    c2++;
                    if(c2 == 4){
                        return false;
                    }
                }
                else{
                    c2 = 0;
                }
            }
        }
        return true;
    }
    void in(int n, int a[]){
        for(int i = 1; i <= n; i++){
            if(a[i]){
                cout << "8";
            }
            else{
                cout << "6";
            }
        }
    }
    int main(){
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
    }