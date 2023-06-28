#include <bits/stdc++.h> 
    using namespace std;
    int n;
    bool used[100];
    int a[100];
    int c  = 0;
    bool check(){
        if(n <= 4){
            if(a[1] == 1|| a[n] == 1){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            for(int i = 1; i < n; i++){
                if(a[i] == 1 && a[i + 1] == 5 || a[i] == 5 && a[i + 1] == 1){
                    return true;
                }
            }
            if(a[1] == 1 && a[n] == 5 || a[1] == 5 && a[n] == 1){
                return true;
            }
            return false;
        }
    }

    void Try(int j){
        for(int i = 1; i <= n; i++){
            if(used[i] == false){
                a[j] = i;
                used[i] = true;
                if(j == n){
                    if(check()){
                        c++;
                        for(int k = 1; k <= n; k++){
                            char x = 'A';
                            cout << char(a[k] + x - 1);
                        }
                        cout << endl;
                    }
                }
                else{
                    Try(j + 1);
                }
                used[i] = false;
            }
        }
    }
    int main(){
        char X;
        cin >> X;
        n = X - 'A' + 1;
        Try(1);
    }