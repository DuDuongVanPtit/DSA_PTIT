#include <bits/stdc++.h>
    using namespace std;

    void solve(int s, int d){
        if(s > d * 9 || s == 0){
            cout << "-1";
            return;
        }
        int a[d] = {0};
        int j = d - 1;
        int i = 9;
        while(s > 0){
            if(s - i >= 0){
                a[j] = i;
                s -= i;
                j--;
            }
            else{
                i--;
            }
        }
        if(a[0] == 0){
            a[0] += 1;
            for(int i = 1; i < d; i++){
                if(a[i] >= 1){
                    a[i]--;
                    break;
                }
            }
        }
        for(int x : a){
            cout << x;
        }
    }

    int main(){
        int t;
        cin >> t;
        while(t--){
            int s, d;
            cin >> s >> d;
            solve(s, d);
            cout << endl;
        }
    }