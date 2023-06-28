#include <bits/stdc++.h> 
    using namespace std;

    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            pair <float, float> p[n];
            for(int i = 0; i < n; i++){
                float f, s;
                cin >> f >> s;
                p[i].first = f; p[i].second = s;
            }
            int f[n + 1];
            f[0] = 0;
            for(int i = 1; i <= n; i++){
                f[i] = 1;
            }
            for(int i = 2; i <= n; i++){
                int max_val = 0;
                for(int j = 1; j < i; j++){
                    if(p[j - 1].first < p[i - 1].first && p[i - 1].second < p[j - 1].second){
                        max_val = max(max_val, f[j]);
                    }
                }
                f[i] += max_val;
            }
            cout << *max_element(f, f + n + 1) << endl;
        }
    }