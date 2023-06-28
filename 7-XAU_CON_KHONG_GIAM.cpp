#include <bits/stdc++.h> 
    using namespace std;
    
    int main(){
        int f[1005];
        for(int i = 0; i < 1004; i++){
            f[i] = 1;
        }
        string a;
        cin >> a;
        int n = a.size();
        for(int i = 1; i < n; i++){
            int max_val = 0;
            for(int j = 0; j < i; j++){
                if(a[j] <= a[i]){
                    max_val = max(max_val, f[j]);
                }
            }
            f[i] += max_val;
        }
        cout << *max_element(f, f + n) << endl;
    }