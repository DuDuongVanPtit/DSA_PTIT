#include <bits/stdc++.h>
    using namespace std;

    int ok = 1;
    void in(int cnt, int a[]){
        cout << "(";
        for(int i = 1; i <= cnt; i++){
            cout << a[i];
            if(i < cnt){
                cout << " ";
            }
        }
        cout << ") ";
    }
    void sinh(int &cnt, int a[]){
        int i = cnt;
        while(i >= 1 && a[i] == 1){
            i--;
        }
        if(i == 0){
            ok = 0;
        }
        else{
            a[i]--;
            int tmp = cnt - i + 1;
            cnt = i;
            int q = tmp / a[i];
            int r = tmp % a[i];
            if(q != 0){
                for(int j = 1; j <= q; j++){
                    cnt++;
                    a[cnt] = a[i];
                }
            }
            if(r != 0){
                cnt++;
                a[cnt] = r;
            }
        }
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            int a[100] = {0};
            int cnt = 1;
            a[1] = n;
            while(ok){
                in(cnt, a);
                sinh(cnt, a);
            }
            cout << endl;
            ok = 1;
        }
    }