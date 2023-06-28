#include <bits/stdc++.h>
    using namespace std;
    void solve(int n){
        if(n < 4){
            cout << "-1";
            return;
        }
        int i = 0;
        while((n - 4 * i) % 7 != 0 && (n - 4*i) >= 0){
            if(n - 4 * i >= 0){
                i++;
            }
            else{
                break;
            }
        }
        if(i * 4 == n){
            for(int j = 1; j <= i; j++){
                cout << "4";
            }
        }
        else{
            if((n - 4 * i) % 7 != 0){
                cout << "-1";
                return;
            }
            int t = (n - 4*i) / 7;
            for(int j = 1; j <= i; j++){
                cout << "4";
            }
            for(int j = 1; j <= t; j++){
                cout << "7";
            }
        }
        

    }

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            solve(n);
            cout << endl;
        }
    }