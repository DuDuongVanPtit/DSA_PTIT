#include <bits/stdc++.h>

    using namespace std;
    
    bool check(int n, int k, int a[]){
        for(int i = k; i >= 1; i--){
            if(a[i] < n - k + i){
                return false;
            }
        }
        return true;
    }
    void in(int n, int k, int a[]){
        int i = k;
        while(i >= 1 && a[i] >= n - k + i){
            i--;
        }
        a[i]++;
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
        }
        for(int i = 1; i <= k; i++){
            cout << a[i] << " ";
        }
        
    }
    int main(){
        int t; 
        cin >> t;
        while(t--){
            int n, k;
            int a[1001] = {0};
            cin >> n >> k;
            for(int i = 1; i <= k; i++){
                cin >> a[i];
            }
            if(check(n, k, a)){
                for(int i = 1; i <= k; i++){
                    cout << i << " ";
                }
            }
            else{
                in(n, k, a);
            }
            cout << endl;
        }
        
    }