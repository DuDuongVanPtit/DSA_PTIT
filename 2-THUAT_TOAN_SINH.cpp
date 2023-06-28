#include <bits/stdc++.h>

    using namespace std;
    int n;
    int x[100];
    void check(string s){
        string t = s;
        reverse(t.begin(), t.end());
        if(t == s){
            for(int i = 0; i < s.size(); i++){
                cout << s[i] << " ";
            }
            cout << endl;
        }
    }
    void in(){
        string s = "";
        for(int i = 1; i <= n; i++){
            s += to_string(x[i]);
        }
        check(s);
    }
    void back_track(int i){
        for(int j = 0; j <= 1; j++){
            x[i] = j;
            if(i == n){
                in();
            }
            else{
                back_track(i + 1);
            }
        }
    }

    int main(){
        cin >> n;
        back_track(1);
    }