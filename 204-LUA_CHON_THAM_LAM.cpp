#include <bits/stdc++.h> 
    using namespace std;
    void Min(int n, int s){
        if(s > n * 9 || s == 0){
            cout << "-1 ";
            return;
        }
        int a[n] = {0};
        int j = n - 1;
        int i = 9;
        while(s > 0){
            if(s - i >= 0){
                s -= i;
                a[j] = i;
                j--;
            }
            else{
                i--;
            }
        }
        if(a[0] == 0){
            a[0] += 1;
            for(int i = 1; i < n; i++){
                if(a[i] != 0){
                    a[i]--;
                    break;
                }
            }
        }
        for(int x : a){
            cout << x;
        }
        cout << " ";
    }
    void Max(int n, int s){
        if(s > n * 9 || s == 0){
            cout << "-1";
            return;
        }
        int a[n] = {0};
        int i = 9;
        int j = 0;
        while(s > 0){
            if(s - i >= 0){
                s -= i;
                a[j++] = i;
            }
            else{
                i--;
            }
        }
        for(int x : a){
            cout << x;
        }
    }

    int main(){
        int n, s;
        cin >> n >> s;
        Min(n, s);
        Max(n, s);
    }