#include <bits/stdc++.h>

    using namespace std;
    int ok = 1;
    void sinh(int n, int a[]){
        int i = n - 1;
        while(i >= 1 && a[i] > a[i + 1]){
            i--;
        }
        if(i == 0){
            ok = 0;
        }
        int j = n;
        while(a[j] < a[i]){
            j--;
        }
        swap(a[i], a[j]);
        reverse(a + i + 1, a + n + 1);
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            int c = 0;
            string t = "";
            string s;
            int n;
            int a[11] = {0};
            cin >> n;
            for(int i = 1; i <= n; i++){
                a[i] = i;
            }
            cin.ignore();
            getline(cin, s);
            for(int i = 0; i < s.size(); i++){
                if(s[i] != ' '){
                    t += s[i];
                }
            }
            while(ok){
                c++;
                string tmp = "";
                for(int i = 1; i <= n; i++){
                    tmp += to_string(a[i]);
                }
                if(tmp == t){
                    break;
                }
                sinh(n, a);
            }
            cout << c << endl;
            ok = 1;
        }
        
    }