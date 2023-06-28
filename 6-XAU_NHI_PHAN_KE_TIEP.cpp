#include <bits/stdc++.h>

    using namespace std;
    bool check(string s){
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '0'){
                return false;
            }
        }
        return true;
    }
    void in(string s){
        if(check(s)){
            for(int i = 0; i < s.size(); i++){
                cout << "0";
            }
        }
        else{
            int i = s.size() - 1;
            while(i >= 1 && s[i] == '1'){
                s[i] = '0';
                i--;
            }
            s[i] = '1';
            cout << s << endl;
        }
        
    }
    int main(){
        int t;
        cin >> t;
        while(t--){
            string s;
            cin >> s;
            in(s);
        }
    }