#include <bits/stdc++.h> 
    using namespace std;
    using ll = long long;
    ll F[100];
    void fibo(){
        F[1] = F[2] = 1;
        for(int i = 3; i <= 92; i++){
            F[i] = F[i - 1] + F[i - 2];
        }
    }

    int main(){
        fibo();
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            for(int i = 0; i <= 92; i++){
                cout << i << " " <<  F[i] << endl;
            }
        }
    }