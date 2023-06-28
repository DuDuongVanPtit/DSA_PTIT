#include <bits/stdc++.h> 
    using namespace std;
    
    int main(){
        int t;
        cin >> t;
        while(t--){
            string s;
            cin >> s;
            map <char, int> mp;
            for(int i = 0; i < s.size(); i++){
                mp[s[i]]++;
            }
            int max_val = -1;
            for(int i = 0; i < s.size(); i++){
                max_val = max(max_val, mp[s[i]]);
            }
            if(s.size() - max_val < max_val - 1){
                cout << "-1\n";
            }
            else{
                cout << "1\n";
            }
        }
    }