#include <bits/stdc++.h>

    using namespace std;

    bool prime[10000007];

    void sang(){
        for(int i = 0; i <= 10000000; i++){
            prime[i] = true;
        }
        prime[0] = prime[1] = false;
        for(int i = 2; i <= sqrt(10000000); i++){
            if(prime[i]){
                for(int j = i * i; j <= 10000000; j += i){
                    prime[j] = false;
                }
            }
        }
    }
    
    int main(){
        sang();
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            int ok = 0;
            for(int i = 0; i < n; i++){
                if(prime[i] && prime[n - i]){
                    ok = 1;
                    cout << i << " " << n - i <<"";
                    break;
                }
            }
            if(!ok){
                cout << "-1";
            }
            cout << endl;
        }
    }